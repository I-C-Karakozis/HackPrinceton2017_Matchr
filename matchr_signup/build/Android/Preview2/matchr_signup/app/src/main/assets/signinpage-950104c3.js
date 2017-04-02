var Observable = require("FuseJS/Observable");

var email = new Observable();
var passwd = new Observable();
var loginerr = new Observable("");

function signin() {
	var json_signup = '{ "email" : ' + email.value +
						', "passwd" : ' + passwd.value + '}';

 	var url = "127.0.0.1:8080";
 	var signupUrl = url + "/Users";

 	router.push("mainpage");

 	fetch(signupUrl, {
 		method: 'POST',
 		headers: { "Content-type": "application/json"},
 		body: json_signup
 	}).then(function(response) {
 		status = response.status;
 		response_ok = response.ok;
 		return response.json();
 	}).then(function(responseObject) {
 		// Either redirect to the matcher page or if signup
 		// fails, return to sign up page
 		return 0;
 	}).catch(function(err){
 		console.log("Error");
 	})

 	return 0;
}

function goBack() {
	email.value = "";
	passwd.value = "";
	loginerr.value = "";
	router.goBack();
}

module.exports = {
	email: email,
	passwd: passwd,
	loginerr: loginerr,
	signin: signin,
	goBack: goBack
};