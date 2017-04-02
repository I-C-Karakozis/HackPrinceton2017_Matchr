<JavaScript>
    var Observable = require('FuseJS/Observable');
    var match1 = {
    	name: "Adelle",
		age: 20	
	}
	var match2 = {
    	name: "Yannis",
		age: 19	
	}
		
	var match1 = Observable();
	var match2 = Observable();

	var name1 = match1.map(function(x) {
		return x.name;
	});
	var name2 = match2.map(function(x) {
		return x.name;
	});

	var buttonText = Observable('Match');
	var clickCount = 0;

	function onClick() {
		clickCount += 1; //
		buttonText.value = 'Clicks: ' + clickCount
	}
	module.exports = {
		match1: match1,
		match2: match2,
		name1: name1,
		name2: name2,
		buttonText: buttonText, 
		onClick: onClick
	};

</JavaScript>