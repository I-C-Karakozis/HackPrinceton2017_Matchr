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
                    'message': 'Friend request from user2 to user1 exists. Create friendrequest' ,
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
        """Returns all the friendrequests that match the given query
        
        Request: GET /friendrequests?user_id=id&user2_id=id2
            only user_id is required; user2_id should be input when a specific match is requested
        Response: HTTP 200 OK
        {
            'status': 'success',
            friendrequests': {
                    { user1_id, user2_id, friended_on } ,
                    { user1_id, user2_id, friended_on } ,
                    ...
                    }
        }
        """
        parser = reqparse.RequestParser()
        parser.add_argument('user_id', type = int, required = True, location = 'args', help = 'User_id must be an integer; required argument')
        parser.add_argument('user2_id', type = int, location = 'args')
        args = parser.parse_args()

        if len(args) == 2:
            friendrequests = models.FriendRequest.query.filter_by(user1_id = user_id, user2_id = user2_id)
            response = {
                'status': 'success',
                'friendrequests': friendrequests
                }
            return make_response(jsonify(response), 200)
        elif len(args) == 1:
            friendrequests = models.FriendRequest.query.filter_by(target1_id = user_id)
            friendrequests2 = models.FriendRequest.query.filter_by(target2_id = user_id)
            friendrequests = friendrequests + friendrequests2
            response = {
                'status': 'success',
                'friendrequests': friendrequests
                }
            return make_response(jsonify(response), 200)
        else:
            response = {
                'status': 'failed',
                'message': 'Wrong number of arguments passed.'
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
        
