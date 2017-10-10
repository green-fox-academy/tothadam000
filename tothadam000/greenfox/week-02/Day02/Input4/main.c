#include <stdio.h>
#include <string.h>

void func();
int main()
{
    //write a void function which asks for a number with scanf and print it out with printf,
    //then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem


    func();



    return 0;
}
void func(){
    int typed_number = 0;
    char name [25];
    printf("Type a number: \n");
    scanf("%d", &typed_number);
    printf("The typed number: %d\n", typed_number);
    printf("Give me your name:\n");
    fflush(stdin);
    gets(name);
    puts(name);
}

