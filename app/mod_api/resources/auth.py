from flask import request, make_response, jsonify
from flask_restful import Resource

from app import app, db, flask_bcrypt
from app.mod_api import models

class Login(Resource):
    """The Login endpoint is for logging in a user.
    This endpoint supports the following requests:
    post -- login an existing user
    """

    def post(self):
        """Given an email and a password, verifies the credentials 
        Request: POST /Login
        {
            'email': 'host@domain.com',
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
        try:
            user = models.User.query.filter_by(email=post_data.get('email')).first()
            if user and flask_bcrypt.check_password_hash(user.password_hash, post_data.get('password')):
                if auth_token:
                    response = {
                        'status': 'success',
                        'message': 'Succesfully logged in.',
                        'data': {
                            'user_id': user.user_id
                            }
                        }
                    return make_response(jsonify(response), 200)
            else:
                response = {
                    'status': 'failed',
                    'message': 'User/Password pair is incorrect.'
                    }
                return make_response(jsonify(response), 404)
        except Exception as e:
            print(e) # TODO: log this
            response = {
                'status': 'failed',
                'message': 'Try again.'
                }
            return make_response(jsonify(response), 500)