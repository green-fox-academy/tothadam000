#include <stdio.h>
#include <stdlib.h>

//void transform (char str[], int original_base, int new_base);

//TODO: write a program, which transforms a number from a number system to another.
//use the stdlib.h functions, and take care of error handling (see the reference)
//the transform() function should print out the result.

int main()
{
    char str[20];
    int original_base;
    int new_base;
    int number;

    printf("Give me a number to transform it in an other system: ");
    scanf("%d", &number);
    printf("Give me the original base: ");
    scanf("%d", &original_base);
    printf("Give me the number of the new base: ");
    scanf("%d", &new_base);

    itoa(number, str, 2);
    printf ("binary: %s\n",str);


    //transform(str, original_base, new_base);
    return(0);
}
