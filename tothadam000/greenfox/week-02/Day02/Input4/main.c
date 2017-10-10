#include <stdio.h>
#include <string.h>
char func();
int main()
{
    //write a void function which asks for a number with scanf and print it out with printf,
    //then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem
    int typed_number = 0;

    printf("Type a number: \n");
    scanf("%d", &typed_number);
    printf("The typed number: %d", typed_number);
    return 0 ;

    //func();

    return 0;
}

/*char func(typed_number){
    printf("Type a number: ");
    scanf("%d", &typed_number);
    printf("The typed number: %d", typed_number);
    return 0 ;

}*/
