int main(int argc, char const *argv[]) {
  puts("***********************************\n");
  puts("* 	     -Level00 -		  *\n");
  puts("***********************************\n");
  printf("Password:");
  if ( scanf(argv[1]) == 5276) {
    puts("Authenticated!\n");
    systeme("/bin/sh");
  }
  else
    puts("Invalid Password!\n");
  return 0;
}
