var Observable = require("FuseJS/Observable");
var friends = require("friends");

userId = 100;

// Shuffle friends list (so it is not the same order)
friends = shuffle(friends);

// Randomize what friend shows up first
var index1 = randomIndex(-1);
var friend1 = Observable(friends[index1]);

// Randomize what friend shows up next (cannot match the first one)
var index2 = randomIndex(index1);
var friend2 = Observable(friends[index2]);

fetch('http://10.9.49.162:8080/api/Users', {
	method: 'POST',
	headers: {
		'Accept': 'application/json',
		'Content-type': 'application/json'
	},
	body: JSON.stringify({
		email: 'hchung@princeton.edu',
		username: 'hchung',
		password: '123'
	})
}).then(function(response) {
	console.log("Then response");
	status = response.status;
	response_ok = response.ok
	console.log(response.status);
	if (response.ok) {
		console.log("Response was okay");
	} else {
		console.log("Response was not okay");
	}
	return response.json();
}).then(function(responseObject) {
	var uId = responseObject.data.user_id;
	console.log("User ID: ");
	console.log(uId.toString());
	console.log("Status: ");
	console.log(status.toString());
}).catch(function(err) {
	console.log(JSON.stringify(err, null, 2));
	console.log(err.name.toString());
})

fetch('http://10.9.49.162:8080/api/Users', {
	method: 'POST',
	headers: {
		'Accept': 'application/json',
		'Content-type': 'application/json'
	},
	body: JSON.stringify({
		email: 'sarahpan@princeton.edu',
		username: 'sarahpan',
		password: '123'
	})
}).then(function(response) {
	console.log("Then response");
	status = response.status;
	response_ok = response.ok
	console.log(response.status);
	if (response.ok) {
		console.log("Response was okay");
	} else {
		console.log("Response was not okay");
	}
	return response.json();
}).then(function(responseObject) {
	var uId = responseObject.data.user_id;
	console.log("User ID: ");
	console.log(uId.toString());
	console.log("Status: ");
	console.log(status.toString());
}).catch(function(err) {
	console.log(JSON.stringify(err, null, 2));
	console.log(err.name.toString());
})

fetch('http://10.9.49.162:8080/api/Users', {
	method: 'POST',
	headers: {
		'Accept': 'application/json',
		'Content-type': 'application/json'
	},
	body: JSON.stringify({
		email: 'adimitui@princeton.edu',
		username: 'adimitui',
		password: '123'
	})
}).then(function(response) {
	console.log("Then response");
	status = response.status;
	response_ok = response.ok
	console.log(response.status);
	if (response.ok) {
		console.log("Response was okay");
	} else {
		console.log("Response was not okay");
	}
	return response.json();
}).then(function(responseObject) {
	var uId = responseObject.data.user_id;
	console.log("User ID: ");
	console.log(uId.toString());
	console.log("Status: ");
	console.log(status.toString());
}).catch(function(err) {
	console.log(JSON.stringify(err, null, 2));
	console.log(err.name.toString());
})

fetch('http://10.9.49.162:8080/api/Users', {
	method: 'POST',
	headers: {
		'Accept': 'application/json',
		'Content-type': 'application/json'
	},
	body: JSON.stringify({
		email: 'ick@princeton.edu',
		username: 'ick',
		password: '123'
	})
}).then(function(response) {
	console.log("Then response");
	status = response.status;
	response_ok = response.ok
	console.log(response.status);
	if (response.ok) {
		console.log("Response was okay");
	} else {
		console.log("Response was not okay");
	}
	return response.json();
}).then(function(responseObject) {
	var uId = responseObject.data.user_id;
	console.log("User ID: ");
	console.log(uId.toString());
	console.log("Status: ");
	console.log(status.toString());
}).catch(function(err) {
	console.log(JSON.stringify(err, null, 2));
	console.log(err.name.toString());
})

// fetch('http://10.9.49.162:8080/api/Users/1', {
// 	method: 'GET',
// 	headers: {
// 		'Accept': 'application/json',
// 		'Content-type': 'application/json'
// 	}
// }).then(function(response) {
// 	console.log("Then response");
// 	status = response.status;
// 	response_ok = response.ok
// 	console.log(response.status);
// 	if (response.ok) {
// 		console.log("Response was okay");
// 	} else {
// 		console.log("Response was not okay");
// 	}
// 	return response.json();
// }).then(function(responseObject) {
// 	var uId = responseObject.data.user_id;
// 	console.log("User ID: ");
// 	console.log(uId.toString());
// 	var username = responseObject.data.username;
// 	console.log("Username: ");
// 	console.log(username.toString());
// 	console.log("Status: ");
// 	console.log(status.toString());
// }).catch(function(err) {
// 	console.log(JSON.stringify(err, null, 2));
// 	console.log(err.name.toString());
// })

fetch('http://10.9.49.162:8080/api/Matches', {
	method: 'POST',
	headers: {
		'Accept': 'application/json',
		'Content-type': 'application/json'
	},
	body: JSON.stringify({
		creator_id: 1,
		target1_id: 2,
		target2_id: 3
	})
}).then(function(response) {
	console.log("Then response");
	status = response.status;
	response_ok = response.ok;
	console.log(response.status);
	if (response_ok) {
		console.log("Response was okay");
	} else {
		console.log("Response was not okay");
	}
	return response.json();
}).then(function(responseObject) {
	status = responseObject.status;
	console.log("Status: ");
	console.log(status.toString());
}).catch(function(err) {
	console.log(JSON.stringify(err, null, 2));
	console.log(err.name.toString());
})

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