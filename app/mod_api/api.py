# Import flask dependencies
from flask import Blueprint
from flask_restful import Api

from resources import matches, users, auth, friendrequests, friendships
from app import db

mod_api = Blueprint('api', __name__, url_prefix='/api')
api_v1 = Api(mod_api)

api_v1.add_resource(matches.Matches, '/Matches')
api_v1.add_resource(matches.Match, '/Matches/<int:match_id>')

api_v1.add_resource(users.Users, '/Users')
api_v1.add_resource(users.User, '/Users/<int:user_id>')

api_v1.add_resource(friendrequests.FriendRequest, '/FriendRequests')
api_v1.add_resource(friendships.Friendships, '/Friendships')

api_v1.add_resource(auth.Login, '/Auth/Login')
