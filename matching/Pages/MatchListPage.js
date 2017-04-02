var Observable = require("FuseJS/Observable");

var matches = require("matches");
var userMatches = [];

userId = 2;

// Compile the user's matches as an array
for (var i = 0; i < matches.length; i++) {
	if (matches[i].friend1.id === userId || matches[i].friend2.id === userId) {
		// Make sure user is listed as the first friend in all match objects (for ease of programming later)
		if (matches[i].friend2.id === userId) {
			var match = {
				friend1: matches[i].friend2,
				friend2: matches[i].friend1,
				recommender: matches[i].recommender
			};
			userMatches.push(match);
		} else {
			userMatches.push(matches[i]);
		}
	}
}

module.exports = {
	userMatches: userMatches,

	goToSelect: goToSelect
}

function goToSelect() {
	router.push("select");
}