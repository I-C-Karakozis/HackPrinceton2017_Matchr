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

fetch('http://localhost/api/Matches', {
	method: 'GET',
	headers: {
		"Content-type": "application/json"
	},
	body: JSON.stringify(requestObject)
}).then(function(response) {
	status = response.status;
	response_ok = response.ok;
	return response.json();
}).then(function(responseObject) {
	console.log(responseObject);
	responseResult = responseObject;
}).catch(function(err) {

});

console.log(responseResult);

module.exports = responseResult;