
int verify_user_name(char *name)
{
  return (strcmp(name, "dat_wil") == 0)) ? 0 : -1;
}

int verify_user_pass(char *pass)
{
  return (strcmp(name, "admin") == 0)) ? 0 : -1;
}

int main(int argc, char const *argv[]) {

  char name[256];
  char pass[100];
  puts("********* ADMIN LOGIN PROMPT *********");
  printf("Enter Username: ");
  fgets(name, 256, stdin);
  if (verify_user_name(name) == 1) {
    puts("verifying username....\n");
    puts("Enter Password:");
    fgets(pass, 100, stdin);
    if (verify_user_pass(pass) == 0 || verify_user_pass(pass) == -1) {
      puts("nope, incorrect password...\n");
      return(0);
    }
  }
  else
    puts("nope, incorrect username...");
  return 0;
}
