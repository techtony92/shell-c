#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMMAND_BUFFER 1024
#define ECHO 5

int main(int argc, char *argv[]) {
  char echo[ECHO];
  char command[COMMAND_BUFFER];
  while(1){
    // Flush after every printf
    setbuf(stdout, NULL);
    printf("$ ");
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
   // Check for echo
    for(int i = 0; i < ECHO; i++){
      echo[i] = command[i];
      if(i == 3){
        echo[ECHO -1] = '\0';
        break;
      }
    }

    
    if(strcmp(echo, "echo") == 0){
      for(int i = ECHO; i <= len; i++){
       
        
        command[i - ECHO] = command[i];
      }
      command[len - 1] = '\0';
      printf("%s\n", command);
      continue;
    }
    
    if(strcmp(command, "quit") == 0 || strcmp(command, "exit") == 0){
      return 0;
    }
    printf("%s: command not found \n", command);
  }
  
  return 0;
}
