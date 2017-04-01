import datetime

from app import app, db, flask_bcrypt

class Match(db.Model):
    match_id = db.Column(db.Integer, primary_key=True, autoincrement=True)
    creator_facebook_id = db.Column(db.String, nullable=False)
    target1_facebook_id = db.Column(db.String, nullable=False)
    target2_facebook_id = db.Column(db.String, nullable=False)
    matched_on = db.Column(db.DateTime, nullable=False)

    def __init__(creator_id, u1_id, u2_id):
        self.creator_facebook_id = creator_id
        self.target1_facebook_id = u1_id
        self.target2_facebook_id = u2_id
        now = datetime.datetime.now()
        self.matched_on = now
