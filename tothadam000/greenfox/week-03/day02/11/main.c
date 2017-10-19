#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//TODO: write a register-login-logout program
    //if you type in register print out "Registration..." or "You are already registered." if you are registered.
	//you are able to log in, if you are already registered, otherwise not. In that case print out "You are not registered.".
    //if you type in login print out "Logging in..." or "Already logged in." if are logged in.
    //if you type in logout print out "Logging out..." or "Already logged out." if are logged out.

int main()
{
	char command[256];
    char logged_in = 0;
    char registered = 0;
    char logged_out = 0;
    //char ret;
    int tmp = 0;

    printf("Type a command: \n");
    printf("-to registration type: register\n");
    printf("-to logging in type: login\n");
    printf("-to logging out type: logout\n");
    printf("-to exit type: exit\n");

    while(strcmp(command, "exit") != 0){
    scanf("%s", command);

    if (strcmp(command, "login") == 0){
        tmp = 1;
    }else if (strcmp(command, "register") == 0){
        tmp = 2;
    }
    else if (strcmp(command, "logout") == 0) {
         tmp = 3 ;
    }
    switch (tmp){

    case 2:
        if (registered == 0){
            registered = 1;
            printf("Registration...\n");
        }else {
            printf("You are already registered!\n");
        }
        break;
    case 1 :
        if (registered == 0){
           printf("You have to registration to logging in!\n");
        }else if (logged_in == 0){
            logged_in = 1;
            printf("Logging in...\n");
        /*}else {
            printf("Logging in...\n");*/
        }
        break;
    case 3:
        if (logged_out == 0){
            printf("You have to logging in to logging out!");
        }else if (logged_out = 1){
            printf("Logging out...\n");
        }
        break;
    default:
            printf("Invalid command!\n");
    break;

    }
    }
}
