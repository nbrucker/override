void	secret_backdoor() {
	char	input[128];

	fgets(input, 128, stdin);
	system(input);
}

void	set_username(char *username) {
	puts('Enter username:');
	fgets(username, 128, stdin);
	// something maybe ?
	printf("%s\n", username);
}

void	set_msg(char *msg) {
	char	buf[?];
	int		len;

	puts('Enter msg:');
	fgets(msg, 1024, stdin);
	len = username + 40;
	strncpy(buf, msg, len);
}

void	handle_msg() {
	char	username[128];
	char	msg[1024];

	set_username(username);
	set_msg(msg);
	puts('something here too');
}

int		main() {
	puts('something');
	handle_msg();
	return 0;
}
