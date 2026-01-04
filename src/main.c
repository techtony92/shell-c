#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMMAND_BUFFER 1024
int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);

  // TODO: Uncomment the code below to pass the first stage
   printf("$ ");
   char command[COMMAND_BUFFER];
   fgets(command, sizeof(command), stdin);
   printf("%s: Command Not Found", command);
  return 0;
}
