#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input
    char pets_name[10];
    //TODO:
    // Get the user's name with gets
    puts("What your name? ");
    gets(buffer);

    //TODO:
    // Print it out with puts
    printf("%s\n", buffer);

    //TODO:
    // Get the user's pet name with gets
    puts("What your pet's name? ");
    gets(pets_name);

    //TODO:
    // Print it out
    printf("%s\n", pets_name );

    return 0;
}
