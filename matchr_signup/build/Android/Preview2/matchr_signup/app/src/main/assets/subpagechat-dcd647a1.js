var Observable = require("FuseJS/Observable");

exports.title = this.Parameter.map(function(param) {
	return param.title;
});

function Message(from, time, text, dock) {
	this.from = from;
	this.time = time;
	this.text = text;
	this.dock = dock;
}

var messages = Observable(
	new Message("Pet", "3:55pm", "Hey we got matched", "Right"),
	new Message("Pet", "3:55pm", ";)", "Right"),
	new Message("You", "3:55pm", "Hi! You're so cuuute :)", "Left"),
	new Message("Pet", "3:58pm", "*inquisitive head tilt*", "Right"));

var message = Observable("");

// var title = "Messages";

function sendMessage() {
	if (message.value !== "") {
		messages.add(new Message("You", "4:00pm", message.value, "Left"));
		message.value = "";
	}
}

module.exports = {
	messages: messages.map(function(message) {
		return {
			info: message.from + " at " + message.time,
			text: message.text,
			dock: message.dock
		};
	}),

	message: message,
	title: exports.title,
	sendMessage: sendMessage,
	canSendMessage: message.map(function(value) {
		return value !== "";
	})
};