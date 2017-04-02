import datetime
from app import app, db, flask_bcrypt

class Match(db.Model):
    match_id = db.Column(db.Integer, primary_key=True, autoincrement=True)
    creator_id = db.Column(db.Integer, nullable=False)
    target1_id = db.Column(db.Integer, nullable=False)
    target2_id = db.Column(db.Integer, nullable=False)
    matched_on = db.Column(db.DateTime, nullable=False)

    def __init__(self, creator_id, u1_id, u2_id):
        self.creator_id = creator_id
        self.target1_id = u1_id
        self.target2_id = u2_id
        now = datetime.datetime.now()
        self.matched_on = now

class User(db.Model):
    user_id = db.Column(db.Integer, primary_key=True, autoincrement=True)
    username = db.Column(db.String(255), nullable=False)
    email = db.Column(db.String(255), unique=True, nullable=False)
    password_hash = db.Column(db.String(255), nullable=False)
    registered_on = db.Column(db.DateTime, nullable=False)

    def __init__(self, email, username, password):
        self.email = email
        self.username = username
        self.password_hash = flask_bcrypt.generate_password_hash(password, app.config.get('BCRYPT_LOG_ROUNDS')).decode()
        now = datetime.datetime.now()
        self.registered_on = now

class Friendship(db.Model):
    id = db.Column(db.Integer, primary_key=True, autoincrement=True)
    user1_id = db.Column(db.Integer, nullable=False)
    user2_id = db.Column(db.Integer, nullable=False)
    friended_on = db.Column(db.DateTime, nullable=False)    

    def __init__(self, user1_id, user2_id):
        self.user1_id = user1_id
        self.user2_id = user2_id
        now = datetime.datetime.now()
        self.friended_on = now

# directed relationships
class FriendRequest(db.Model):
    id = db.Column(db.Integer, primary_key=True, autoincrement=True)
    user1_id = db.Column(db.Integer, nullable=False)
    user2_id = db.Column(db.Integer, nullable=False)    

    def __init__(self, user1_id, user2_id):
        self.user1_id = user1_id
        self.user2_id = user2_id

