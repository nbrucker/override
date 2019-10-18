uint	get_unum() {
	uint	value;

	value = read on stdin and convert;
	return value;
}

void	read_number(uint buf) {
	uint	index;
	uint	*ptr;

	index = get_unum();
	index = index << 2;
	ptr = buf + index;
	printf("%u\n", *ptr);
}

void	store_number(uint *buf) {
	uint	index;
	uint	value;
	uint	*ptr;

	value = get_unum();
	index = get_unum();
	if (index % 3 == 0) {
		puts("Error")
		return;
	}
	index = index << 2;
	ptr = buf + index;
	*ptr = value;
}

int		main() {
	uint	buf[?];
	char	input[20];

	while (1) {
		fgets(input, 20, stdin);
		if (input == 'store')
			store_number();
		else if (input == 'read')
			read_number();
		else if (input == 'quit')
			break;
		else
			puts("Error");
	}
	return 0;
}
