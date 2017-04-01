from flask import request, abort, make_response, jsonify
from flask_restful import Resource, reqparse

parser = reqparse.RequestParser()

class Matches(Resource):
    def get(self, match_id):
        return match_id

    def patch(self, match_id):
        args = parser.parse_args()
        if request.query_string:
            abort(400)
        output = 'patch successful ' + str(match_id)
        return output

    def delete(self, match_id):
        return match_id

class Match(Resource):
    def post(self):
        response = {
            'status': 'failed',
            'message': 'use the /api/Auth/Register endpoint to create a new user.',
            'next_url': '/api/Auth/Register'
            }
        return make_response(jsonify(response), 301)
