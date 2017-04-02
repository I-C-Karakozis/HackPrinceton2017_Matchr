from flask import request, make_response, jsonify
from flask_restful import Resource, reqparse

from app import app, db, flask_bcrypt
from app.mod_api import models

import datetime

now = datetime.datetime.now()
parser = reqparse.RequestParser()

class FriendRequest(Resource):
    def post(self):
        """Creates a friend request from user1 to user2
        
        Request: POST /FriendRequests
        {
            'user1_id' = user2_id
            'user2_id' = user2_id
        }
        Response: HTTP 201 OK
        {
            'status': 'success',
            'sigil': False
            'data': {
                'user1_id' = user1_id ,
                'user2_id' = user2_id
                }      
        }
        Response: HTTP 202 Accepted
        {
            'status': 'success',
            'sigil': False
            'data': {
                'user1_id' = user1_id ,
                'user2_id' = user2_id
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

            existing_request1 = models.FriendRequest.query(user1_id = user1_id, user2_id = user2_id).first()
            existing_request2 = models.FriendRequest.query(user1_id = user2_id, user2_id = user1_id).first()
            if existing_request2:
                response = {
                    'status': 'success',
                    'message': 'Friend request from user2 to user1 exists. Create friendship' ,
                    'sigil': 'True'
                    }
                return make_response(jsonify(response), 202)

            elif not existing_request1:
                request = models.FriendRequest(
                    user1_id = user1_id ,
                    user2_id = user2_id
                    )

                db.session.add(request)
                db.session.commit()

                response = {
                    'status': 'success',
                    'sigil': 'False' ,
                    'data': {
                        'user1_id' : user1_id ,
                        'user2_id' : user2_id
                        }
                    }
                return make_response(jsonify(response), 201)
            else:
                response = {
                    'status': 'failed',
                    'message': "You have already sent a friend request to that user."
                    } 
                return make_response(jsonify(response), 400)
        else:
            response = {
                    'status': 'failed',
                    'message': "Incomplete information passed."
                    } 
            return make_response(jsonify(response), 400) 

        
    def get(self):
        """Returns success existence of a friend request from user1 to user2

        Request: GET /FriendRequests
        {
            'user1_id' = user1_id
            'user2_id' = user2_id
        }
        Response: HTTP 200 OK
        {
            'status': 'success'
            'data': {
                'user1_id': user1_id
                'user2_id': user2_id
                'friendrequest': 'yes' or 'no'
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

            existing_request = models.FriendRequest.query(user1_id = user1_id, user2_id = user2_id).first()
            if existing_request:                
                response = {
                    'status': 'success' ,
                    'data': {
                        'user1_id': user1_id ,
                        'user2_id': user2_id ,
                        'friendrequest': 'yes'
                        }
                    }
                return make_response(jsonify(response), 200)
            else:
                response = {
                    'status': 'success' ,
                    'data': {
                        'user1_id': user1_id ,
                        'user2_id': user2_id ,
                        'friendrequest': 'no'
                        }
                    } 
                return make_response(jsonify(response), 400)
        else:
            response = {
                    'status': 'failed',
                    'message': "Incomplete information passed."
                    } 
            return make_response(jsonify(response), 400)

    def delete(self): 
        """Delets a friend request from user1 to user2 if it exists
        
        Request: DELETE /FriendRequests
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

            existing_request1 = models.FriendRequest.query(user1_id = user1_id, user2_id = user2_id).first()
            existing_request2 = models.FriendRequest.query(user1_id = user2_id, user2_id = user1_id).first()
            if existing_request1 or existing_request2:
                if existing_request1:
                    db.session.delete(existing_request1)
                    db.session.commit()
                if existing_request2:
                    db.session.delete(existing_request2)
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
                    'message': "Friend request does not exist"
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
            'message': 'Existing friend requests cannot be patched'
            }
        return make_response(jsonify(response), 400)
        
