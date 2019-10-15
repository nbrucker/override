
void log_wrapper()
{
	/* write the file into backups*/
}

int main() {
	*FILE fd;
	*FILE fd2;
	int fd3;
	int len;
	static char dirname[64] = "./backups/";
	
	if (argc != 2)
		printf("Usage: %s filename\n");
	if (fd = fopen("./backups/.log", "w") == NULL)
	{
		printf("ERROR: Failed to open %s\n", "./backups/.log");
		exit(1);
	}
	log_wrapper(/* do some stuff */);
	if (fd2 = fopen(argv[1], "r") == NULL)
	{
		printf("ERROR: Failed to open %s\n", argv[1]);
		exit(1);
	}
	strcpy(dirname, "./backups/");
	len = strlen(dirname);
	strcat(dirname, argv[1]);
	fd3 =(fopen("./backups/.log", "w"))
	if (fd3 == 0)
		{
			printf("ERROR: Failed to open %s\n", "./backups/", argv[1]);
			exit(1);
		}
		log_wrapper(/* do some stuff */);
		close(fd);
		close(fd2);
	}
