var Observable = require('FuseJS/Observable');

function gotosignup() {
	router.push("signuppage");
}

function gotosignin() {
	router.push("signinpage");
}

module.exports = {
	gotosignup: gotosignup,
	gotosignin: gotosignin
};