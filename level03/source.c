void decrypt(int password) {
	if (password == 322424827)
		system("/bin/sh");
}

void test(int password, int pass) {
	if (password - 21 < pass)
		decrypt();
	else
		puts("\nInvalid Password");
}

int main(void) {
	/* do some stuff */
	int pass = 322424845;
	int password[?];

	puts("********************************");
	puts("*\t\tlevel03\t\t**");
	puts("********************************");
	printf("Password:");
	scanf("%d", password)
	test(password, pass);
}
