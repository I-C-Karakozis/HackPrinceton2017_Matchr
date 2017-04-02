module.exports = {
	goToSelect: goToSelect,
	goToMatchList: goToMatchList,
	goToMessages: goToMessages,
	goToProfile: goToProfile
};

function goToSelect() {
	router.push("select");
};

function goToMatchList() {
	router.push("matchList");
};

function goToMessages() {
	router.push("messages");
};

function goToProfile() {
	router.push("profile");
};