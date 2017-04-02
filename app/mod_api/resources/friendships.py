from flask import request, make_response, jsonify
from flask_restful import Resource, reqparse
import json

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

            existing_friendship = models.Friendship.query.filter_by(user1_id = user1, user2_id = user2).first()
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
        """Returns all the friendships that match the given query
        
        Request: GET /Friendships?user_id=id&user2_id=id2
            only user_id is required; user2_id should be input when a specific match is requested
        Response: HTTP 200 OK
        {
            'status': 'success',
            friendships': {
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
            friendships = models.Friendship.query.filter_by(user1_id = int(args['user_id']), user2_id = int(args['user2_id']))
            response = {
                'status': 'success',
                'friendships': friendships
                }
            return make_response(jsonify(response), 200)
        elif len(args) == 1:
            friendships = models.Friendship.query.filter_by(target1_id = int(args['user_id']))
            friendships2 = models.Friendship.query.filter_by(target2_id = int(args['user_id']))
            friendships = friendships + friendships2
            response = {
                'status': 'success',
                'friendships': friendships
                }
            return make_response(jsonify(response), 200)
        else:
            response = {
                'status': 'failed',
                'message': 'Wrong number of arguments passed.'
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

            existing_request = models.Friendship.query(user1_id = user1, user2_id = user2).first()
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
      
    

    
