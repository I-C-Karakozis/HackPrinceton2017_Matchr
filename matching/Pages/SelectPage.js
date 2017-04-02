var Observable = require("FuseJS/Observable");
var friends = require("friends");

// Shuffle friends list (so it is not the same order)
friends = shuffle(friends);

// Randomize what friend shows up first
var index1 = randomIndex(-1);
var friend1 = Observable(friends[index1]);

// Randomize what friend shows up next (cannot match the first one)
var index2 = randomIndex(index1);
var friend2 = Observable(friends[index2]);

module.exports = {
	friend1: friend1,
	friend2: friend2,

	nextFriend: nextFriend,
	previousFriend: previousFriend,
	matchFriends: matchFriends
};

// Shuffle the array (so that friends list is not ordered the same each time)
function shuffle(array) {
	var currentIndex = array.length;

	// While there are remaining elements to shuffle
	while (0 != currentIndex) {
		var randomIndex = Math.floor(Math.random() * currentIndex);
		currentIndex -= 1;

		tempValue = array[currentIndex];
		array[currentIndex] = array[randomIndex];
		array[randomIndex] = tempValue;
	}

	return array;
};

// Randomized index so that the first match on the match screen is random
function randomIndex(previousIndex) {
	tempIndex = Math.floor(Math.random() * friends.length);

	// Ensures that the indices do not match
	while (previousIndex === tempIndex) {
		tempIndex = Math.floor(Math.random() * friends.length);
	}

	return tempIndex;
};

// Get next friend in the shuffled friends list
function nextFriend(currentFriend) {
	if (friend === friend1) {
		var thisIndex = index1;
		var otherIndex = index2;
	} else {
		var thisIndex = index2;
		var otherIndex = index1;
	}

	if (thisIndex === friends.length - 1) {
		thisIndex = 0;
	} else {
		thisIndex++;
	}

	// Ensure the next friend does not match the other friend already in the match view
	while (thisIndex === otherIndex) {
		if (thisIndex === friends.length - 1) {
			thisIndex = 0;
		} else {
			thisIndex++;
		}
	}

	// Update friend
	if (friend === friend1) {
		friend1 = friends[thisIndex];
		index1 = thisIndex;
	} else {
		friend2 = friends[thisIndex];
		index2 = thisIndex;
	}
};

// Get previous friend in the shuffled friends list
function previousFriend(currentFriend) {
	if (friend === friend1) {
		var thisIndex = index1;
		var otherIndex = index2;
	} else {
		var thisIndex = index2;
		var otherIndex = index1;
	}

	if (thisIndex === 0) {
		thisIndex = friends.length - 1;
	} else {
		thisIndex--;
	}

	// Ensure the previous friend does not match the other friend already in the match view
	while (thisIndex === otherIndex) {
		if (thisIndex === 0) {
			thisIndex = friends.length - 1;
		} else {
			thisIndex++;
		}
	}

	// Update friend
	if (friend === friend1) {
		friend1 = friends[thisIndex];
		index1 = thisIndex;
	} else {
		friend2 = friends[thisIndex];
		index2 = thisIndex;
	}
};

function matchFriends() {
	var match = new Object();
	match.friend1 = friend1;
	match.friend2 = friend2;
};