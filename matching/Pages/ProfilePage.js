var client = new HTTPClient();
var responseResult = "";

// client.get('http://localhost/api/Matches', function(response) {
// 	responseResult = response;
// });

// function HTTPClient() {
// 	this.get = function(url, callback) {
// 		var httpRequest = new XMLHttpRequest();
// 		httpRequest.onreadysetchange = function() {
// 			if (httpRequest.readyState === 4 && httpRequest.status == 200) {
// 				callback(httpRequest.responseText);
// 			}
// 		}
// 		httpRequest.open("GET", url, true);
// 		httpRequest.send(null);
// 	}
// }
var status = 0;
var response_ok = false;

fetch('http://10.9.49.162:8080/api/Matches', {
	method: 'GET',
	headers: {
		'Accept': 'application/json',
		'Content-type': 'application/json'
	}
}).then(function(response) {
	
})