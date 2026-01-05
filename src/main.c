#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMMAND_BUFFER 1024
int main(int argc, char *argv[]) {
  while(1){
    // Flush after every printf
    setbuf(stdout, NULL);
    printf("$ ");
    char command[COMMAND_BUFFER];
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = '\0';
    size_t len = strlen(command);

    if(len > 0 && command[len - 1] == '\n'){
      command[len - 1] = '\0';
    }
    // while(1){
    //   // Check if: quit/exit
    //   if(input == "quit" || input == "exit"){
    //     return 0;
    //   }
    // }
    

    if(strcmp(command, "quit") == 0 || strcmp(command, "exit") == 0){
      return 0;
    }
    printf("%s: command not found \n", command);
  }
  
  return 0;
}
