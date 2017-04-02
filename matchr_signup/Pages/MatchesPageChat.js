var Observable = require("FuseJS/Observable");

function createPage(title) {
	return {
		title: title,
		clicked: function() {
			router.push("subPageChat", { title })
		}
	};
}

var pages = Observable();

for (var i = 1; i <= 4; i++) {
	pages.add(createPage("Messages " + i + " "));
}

module.exports = {pages};