#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMMAND_BUFFER 1024
int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  int c;
  for(;;){
    printf("$ ");
    char command[COMMAND_BUFFER];
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = '\0';
    
    printf("%s: command not found \n", command);
  }
  return 0;
}
