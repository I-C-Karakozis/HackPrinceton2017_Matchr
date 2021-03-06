from flask import request, make_response, jsonify
from flask_restful import Resource, reqparse

from app import app, db, flask_bcrypt
from app.mod_api import models

now = datetime.datetime.now()
parser = reqparse.RequestParser()

class FriendRequest(Resource):
    def post(self):
        """Creates match between the users with the given target_ids
        
        Request: POST /Matches
        {
            'status': 'success',
            'data': {
                'user1_id' = user2_id
                'user2_id' = user2_id
                }
        }
        Response: HTTP 200 OK
        {
            'status': 'success',
            'data': {
                'match_id': match_id
                }
        }
        Returns 404 if no user with the given id was found.
        """
        args = parser.parse_args()
        if request.query_string:
            abort(400)
        post_data = request.get_json()           
        if post_data.has_key('creator_id') and post_data.has_key('target1_id') and post_data.has_key('target2_id'):
            creator_id = post_data.get('creator_id')
            target1_id = post_data.get('target1_id')
            target2_id = post_data.get('target2_id')

            if target1_id == target2_id:
                response = {
                    'status': 'failed',
                    'message': "Identical targets error."
                    } 
                return make_response(jsonify(response), 400)

            if target1_id == creator_id or target2_id == creator_id:
                response = {
                    'status': 'failed',
                    'message': "Error: Creator is one of the matched targets."
                    } 
                return make_response(jsonify(response), 400) 

            # ensure target1_id < target2_id
            target1 = min(target1_id, target2_id)
            target2 = max(target1_id, target2_id)
            existing_match = models.Match.query(creator_id = creator_id, target1_id = target1, target2_id = target2).first()
            if not existing_match:
                match = models.Match(
                    creator_id = creator_id ,
                    target1_id = target1 ,
                    target2_id = target2
                    )

                db.session.add(match)
                db.session.commit()

                response = {
                    'status': 'success',
                    'data': {
                        'match_id': match_id
                        }
                    }
                return make_response(jsonify(response), 201)
            else:
                response = {
                    'status': 'failed',
                    'message': "You have already created this match."
                    } 
                return make_response(jsonify(response), 400)
        else:
            response = {
                    'status': 'failed',
                    'message': "Incomplete information passed."
                    } 
            return make_response(jsonify(response), 400) 

        
    def get(self):
        """Returns all information of the user with the id corresponding to the authentication token presented in the Authorizaton header. If the token is invalid, returns an error.
        
        Request: GET /Users
        {
            'status': 'success',
            'data': {
                'target_id' = target_id
                }
        }
        Response: HTTP 200 OK
        {
            'status': 'success',
            'data': [
                { creator_id, target1_id, target2_id,  matched_on } ,
                { creator_id, target1_id, target2_id,  matched_on } ,
                ...
                ]
        }
        Returns 404 if no user with the given id was found.
        """

    def patch(self): 
        response = {
            'status': 'failed',
            'message': 'Existing friend requests cannot be patched'
            }
        return make_response(jsonify(response), 400)

    def delete(self): 
        # change later
        response = {
            'status': 'failed',
            'message': 'Existing friend request cannot be deleted.'
            }
        return make_response(jsonify(response), 400)
