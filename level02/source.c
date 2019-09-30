
int main(void) {
	FILE *f;
	char pass[?];
	char username[?];
	char password[?];

	f = fopen("/home/users/level03/.pass");
	if (!pass) {
		fwrite("jesaisplus", ?, ?, stdout);
		exit(1);
	}

	fread(pass, ?, f);

	// print des trucs
	fgets(username, ?, stdin);
	// fais des machins avec username
	// print des trucs
	fgets(password, ?, stdin);
	// fais des machins avec password
	if (strncmp(password, pass, ?) == 0) {
		system("/bin/bash");
	} else {
		printf(username);
		puts(" does not have access");
	}
}
