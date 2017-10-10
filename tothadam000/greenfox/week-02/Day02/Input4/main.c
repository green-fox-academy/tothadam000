#include <stdio.h>
#include <string.h>

void func(int number);
int main()
{
    //write a void function which asks for a number with scanf and print it out with printf,
    //then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem

    func(number);

    return 0;

}

void func(){
    int number;
    scanf("%d", &number);
    printf("%d\n", number);
    return 0;
}

