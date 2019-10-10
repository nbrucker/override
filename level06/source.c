int auth(char *login, unsigned int serial) {
	int value = ?;

	// something with login ?
	if (value == serial)
		return (0);
	return (1);
}

int main() {
	char			*login;
	unsigned int	serial;

	// puts and printf
	fgets(login, 32, stdin);
	// puts and printf
	scanf("%u", &serial);
	if (auth(login, serial) == 0) {
		// puts and printf
		system("/bin/sh");
	}
}
