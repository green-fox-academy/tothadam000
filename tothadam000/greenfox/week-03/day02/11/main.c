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
    char ret;

    printf("Type a command: \n");
    printf("-to registration type: register\n");
    printf("-to logging in type: login\n");
    printf("-to logging out type: logout\n");
    printf("-to exit type: exit\n");
    scanf("%s", command);

    while(strcmp(command, "exit") != 0){
        switch (command){

        case "register":
            if (registered == 0){
                registered = 1;
                printf("Registration...");
            }else {
                printf("You are already registered!");
            }
        case "login" :
            if (registered == 0){
               printf("You have to registration to logging in!")
            }else if (logged_in == 0){
                logged_in = 1;
                printf("Logging in...");
            }else {
                printf("Logging in...");
            }
        case "logout":
            if (logged_out == 0){
                logged_out = 1;
                printf(Logging out...);
            }default {
                printf(Invalid command!);
                }
        }
    }
}
