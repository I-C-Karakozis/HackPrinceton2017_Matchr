var Observable = require("FuseJS/Observable");

function createPage(username) {
	return {
		title: username,
		clicked: function() {
			router.push("subPage", { title })
		}
	};
}

var pages = Observable();

for (var i = 1; i <= 4; i++) {
	pages.add(createPage("Match " + i + " "));
}

module.exports = { pages };