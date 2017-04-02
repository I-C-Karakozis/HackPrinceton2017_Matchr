var Observable = require("FuseJS/Observable");

var email = new Observable();
var username = new Observable("");
var passwd = new Observable();
var repasswd = new Observable();
var passwderr = new Observable("");

function signup() {
	// Check if the two passwords are equal
	if (passwd.value !== repasswd.value) {
		passwderr.value = "ERROR: Passwords not equal";
		return -1;
	} else {
		passwderr.value = "";
	}

	var json_signup = '{ "email" : ' + email.value +
						', "username" : ' + username.value +
						', "passwd" : ' + passwd.value + '}';

	//var json_obj = JSON.parse(json_signup);

 	var url = "127.0.0.1:8080";
 	var signupUrl = url + "/Users";

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
	username.value = "";
	passwd.value = "";
	repasswd.value = "";
	passwderr.value = "";
	router.goBack();
}

module.exports = {
	email: email,
	username: username,
	passwd: passwd,
	repasswd: repasswd,
	passwderr: passwderr,
	signup: signup,
	goBack: goBack
};