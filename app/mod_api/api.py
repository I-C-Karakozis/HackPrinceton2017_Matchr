# Import flask dependencies
from flask import Blueprint
from flask_restful import Api

from resources import matches
from app import db

mod_api = Blueprint('api', __name__, url_prefix='/api')
api_v1 = Api(mod_api)

api_v1.add_resource(matches.Match, '/Matches')
api_v1.add_resource(matches.Matches, '/Matches/<int:match_id>')
