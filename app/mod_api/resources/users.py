from flask import request, make_response, jsonify
from flask_restful import Resource, reqparse
import datetime

from app import app, db, flask_bcrypt
from app.mod_api import models

now = datetime.datetime.now()
parser = reqparse.RequestParser()

class Users(Resource):
    def post(self):
        """ Given an email, username and password, create a user.
        Request: POST /Users
        {
            'email': 'host@domain.com',
            'username': 'username'
            'password': 'password'
        }
        Response: HTTP 200 OK
        {
            'status': 'success',
            'data': {
                'user_id': 5
            }
        }
        """
        post_data = request.get_json()
        user = models.User.query.filter_by(email=post_data.get('email')).first()
        if not user:
            user = models.User.query.filter_by(username=post_data.get('username')).first()
            if not user:
                try:
                    user = models.User(
                        email=post_data.get('email'),
                        username=post_data.get('username'),
                        password=post_data.get('password')
                        )

                    db.session.add(user)
                    db.session.commit()

                    response = {
                        'status': 'success',
                        'message': 'Successfully registered.',
                        'data': {
                            'user_id': user.user_id
                            }
                        }

                    return make_response(jsonify(response), 201)
                except Exception as e:
                    response = {
                        'status': 'failed',
                        'message': 'Some error occured. Please try again'
                        }
                    return make_response(jsonify(response), 401)
            else:
                response = {
                'status': 'failed',
                'message': 'User with provided username already exists.'
                }
            return make_response(jsonify(response), 202)
        else:
            response = {
                'status': 'failed',
                'message': 'Email entered already used.'
                }
            return make_response(jsonify(response), 202)


class User(Resource):
    def patch(self, user_id): 
        """Given correct current password and a new password, it updates the password of the user with the id corresponding to the authentication token presented in the Authorizaton header to the new password. If the token is invalid, returns an error.
        Request: PATCH /Users/5
                Authorizaton: Bearer auth_token
        {
            'password': 'password'
            'new_password': 'new_password'
        }
        Response: HTTP 200 OK
        {
            'status': 'success',
            'data': {
                'user_id': 5
            }
        }
        Returns 404 if no user with the given id was found.
        """
        args = parser.parse_args()
        if request.query_string:
            abort(400)
            
        user = models.User.query.get_or_404(user_id) 
        post_data = request.get_json()           

        if post_data.has_key('password') & post_data.has_key('new_password'):
            passed_old_password = post_data.get('password')
            passed_new_password = post_data.get('new_password')

            if not flask_bcrypt.check_password_hash(user.password_hash, passed_old_password):
                response = {
                       'status': 'failed',
                       'message': "Unauthorized access: Incorrect password entered."
                    } 
                return make_response(jsonify(response), 401)

            user.password_hash = flask_bcrypt.generate_password_hash(passed_new_password, app.config.get('BCRYPT_LOG_ROUNDS')).decode()
            db.session.commit()

            response = {
                'status': 'success',
                'data': {
                    'user_id': user_id ,
                    }
                }
            return make_response(jsonify(response), 200)
        else:
            response = {
                'status': 'failed',
                'message': "Incomplete information passed: Patch request requires 'password'' and 'new_password' attributes"
                } 
            return make_response(jsonify(response), 400)                

    def get(self, user_id):
        """Returns all information of the user with the id corresponding to the authentication token presented in the Authorizaton header. If the token is invalid, returns an error.
        
        Request: GET /Users/5
                Authorizaton: Bearer auth_token
        Response: HTTP 200 OK
        {
            'status': 'success',
            'data': {
                'user_id': 5 ,
                'username': user.username ,
                'email': user.email ,
                'registered_on': user.registered_on
                }
        }
        Returns 404 if no user with the given id was found.
        """
        args = parser.parse_args()
        if request.query_string:
            abort(400)

        user = models.User.query.get_or_404(user_id)
        response = {
            'status': 'success',
            'data': {
                'user_id': user_id ,
                'username': user.username,
                'email': user.email ,
                'registered_on': user.registered_on
                }
            }
        return make_response(jsonify(response), 200)

    def delete(self, user_id):
        """Deletes user with the id corresponding to the authentication token presented in the Authorizaton header. If the token is invalid, returns an error.
        
        Request: DELETE /Users/5
        {
            'password': 'password'
        }
        Response: HTTP 200 OK
        {
            'status': 'success',
            'data': {
                'user_id': 5
                }
        }
        Returns 404 if no user with the given id was found.
        """
        args = parser.parse_args()
        if request.query_string:
            abort(400)

        user = models.User.query.get_or_404(user_id)
        post_data = request.get_json()           

        if post_data.has_key('password'):
            password = post_data.get('password')

            if not flask_bcrypt.check_password_hash(user.password_hash, password):
                response = {
                    'status': 'failed',
                    'message': "Unauthorized access: Incorrect password entered."
                    } 
                return make_response(jsonify(response), 401)

            db.session.delete(user)
            db.session.commit()

            response = {
                'status': 'success',
                'data': {
                    'user_id': user_id ,
                    }
                }
            return make_response(jsonify(response), 200)
        else:
            response = {
                'status': 'failed',
                'message': "Incomplete information passed: Delete request requires 'password' attribute."
                } 
            return make_response(jsonify(response), 400) 