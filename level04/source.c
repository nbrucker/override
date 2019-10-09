int main(void) {
	char buff[156];
	pid_t pid_fork;

	pid_fork = fork();
	if (pid_fork == 0)
	{
		prctl(/* do some stuff*/)
		ptrace(/* do some stuff*/); // against the shell
		puts("Give me some shellcode, k")
		gets(buff);
	}
	if (/*something*/)
		puts("child is exiting...")
		return(0);
	else
	{
		puts("no exec() for you");  // against the shell
		kill();
	}
	return(0);
}
