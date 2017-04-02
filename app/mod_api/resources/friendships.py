from flask import request, make_response, jsonify
from flask_restful import Resource, reqparse

from app import app, db, flask_bcrypt
from app.mod_api import models

parser = reqparse.RequestParser()

class Friendships(Resource):
    def post(self):
        """Creates a friendship between user1 to user2
        
        Request: POST /Friendships
        {
            'user1_id' = user2_id
            'user2_id' = user2_id
        }
        Response: HTTP 201 OK
        {
            'status': 'success'
            'data': {
                'user1_id': user1_id
                'user2_id': user2_id
                }
        }
        """
        args = parser.parse_args()
        if request.query_string:
            abort(400)
        post_data = request.get_json()           
        if post_data.has_key('user1_id') and post_data.has_key('user2_id'):
            user1_id = post_data.get('user1_id')
            user2_id = post_data.get('user2_id')

            if user1_id == user2_id:
                response = {
                    'status': 'failed',
                    'message': "Identical users given."
                    } 
                return make_response(jsonify(response), 400)

            # ensure user1 < user2 (ids)
            user1 = min(user1_id, user2_id)
            user2 = min(user1_id, user2_id)

            existing_friendship = models.FriendRequest.query(user1_id = user1, user2_id = user2).first()
            if not existing_friendship:
                friendship = models.Friendship(
                    user1_id = user1 ,
                    user2_id = user2
                    )

                db.session.add(friendship)
                db.session.commit()

                response = {
                    'status': 'success',
                    'data': {
                        'user1_id' : user1_id ,
                        'user2_id' : user2_id
                        }
                    }
                return make_response(jsonify(response), 201)
            else:
                response = {
                    'status': 'failed',
                    'message': "Friendship already exists."
                    } 
                return make_response(jsonify(response), 400)
        else:
            response = {
                    'status': 'failed',
                    'message': "Incomplete information passed."
                    } 
            return make_response(jsonify(response), 400)

    def get(self):
        """Returns all friendships of user

        Request: GET /Friendships
        {
            'user_id' = user_id
        }
        Response: HTTP 200 OK
        {
            'status': 'success'
            'data': {
                'user_id': user_id
                }
        }
        Returns 404 if no user with the given id was found.
        """
        args = parser.parse_args()
        if request.query_string:
            abort(400)
        post_data = request.get_json()           
        if post_data.has_key('user_id'):
            user_id = post_data.get('user_id')

            existing_request = models.FriendRequest.query(user1_id = user1_id, user2_id = user2_id).first()
            if existing_request:
                
                response = {
                    'status': 'success',
                    }
                return make_response(jsonify(response), 200)
            else:
                response = {
                    'status': 'failed',
                    'message': "Friend request does not exist"
                    } 
                return make_response(jsonify(response), 400)
        else:
            response = {
                    'status': 'failed',
                    'message': "Incomplete information passed."
                    } 
            return make_response(jsonify(response), 400)    

    def delete(self): 
        """Deletes the friendship between user1 and user2 if it exists
        
        Request: DELETE /Friendships
        {
            'user1_id' = user2_id
            'user2_id' = user2_id
        }
        Response: HTTP 200 OK
        {
            'status': 'success'
            'data': {
                'user1_id': user1_id
                'user2_id': user2_id
                }
        }
        Returns 404 if no user with the given id was found.
        """
        args = parser.parse_args()
        if request.query_string:
            abort(400)
        post_data = request.get_json()           
        if post_data.has_key('user1_id') and post_data.has_key('user2_id'):
            user1_id = post_data.get('user1_id')
            user2_id = post_data.get('user2_id')

            if user1_id == user2_id:
                response = {
                    'status': 'failed',
                    'message': "Identical users given."
                    } 
                return make_response(jsonify(response), 400)

            # ensure user1 < user2 (id's)
            user1 = min(user1_id, user2_id)
            user2 = min(user1_id, user2_id)

            existing_request = models.FriendRequest.query(user1_id = user1, user2_id = user2).first()
            if existing_request:
                
                db.session.delete(existing_request)
                db.session.commit()

                response = {
                    'status': 'success',
                    'data': {
                        'user1_id': user1_id ,
                        'user2_id': user2_id
                        }
                    }
                return make_response(jsonify(response), 200)
            else:
                response = {
                    'status': 'failed',
                    'message': "Friendship does not exist"
                    } 
                return make_response(jsonify(response), 400)
        else:
            response = {
                    'status': 'failed',
                    'message': "Incomplete information passed."
                    } 
            return make_response(jsonify(response), 400)

    def patch(self): 
        response = {
            'status': 'failed',
            'message': 'Existing friendships cannot be patched.'
            }
        return make_response(jsonify(response), 400) 
      
    

    
