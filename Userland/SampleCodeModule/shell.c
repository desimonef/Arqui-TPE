
#include "stdlib.h"
#include "userlib.h"
#include "shell.h"

#define MAXLEN 100

void initShell(){
    printf("Bienvenidos a nuestro precario sistema operativo\n\nEs el año %d\n\n", 2021);
    shell();
}

void shell() {
    char command[MAXLEN] = {0};
    char arg[MAXLEN] = {0};
    while(1) {
        printf("Bienvenidos a nuestro precario sistema operativo\n\nEs el año %d\n\n", 2021);
        printf("%c : %s", 'J', "TOTO");
        //printf("$ ");
        *command = 0;
        *arg = 0;
        //scanf("%s %s", command, arg);
        execute(command, arg); 
    }
}

void execute(const char * command, const char * arg) {
    if(strcmp(command, "toto") == 0);
        //toto();
}