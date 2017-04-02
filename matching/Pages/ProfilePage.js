var client = new HTTPClient();
var responseResult = "";

client.get('http://localhost/api/Matches', function(response) {
	responseResult = response;
});

console.log(responseResult);

module.exports = responseResult;

function HTTPClient() {
	this.get = function(url, callback) {
		var httpRequest = new XMLHttpRequest();
		httpRequest.onreadysetchange = function() {
			if (httpRequest.readyState === 4 && httpRequest.status == 200) {
				callback(httpRequest.responseText);
			}
		}
		httpRequest.open("GET", url, true);
		httpRequest.send(null);
	}
}