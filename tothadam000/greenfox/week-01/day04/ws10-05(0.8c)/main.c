#include <stdio.h>
#include <stdlib.h>

/*
create a program which generates numbers from 0 to 100
for each number write if the number is odd or even (don't print out the numbers)
*/

int main()
{
     int num;
    num = 32;
    for (num=0; num<=100; num++) {

        switch (num%2) {
        case 1 : printf("The number is odd.\n");
            break;
        case 0 : printf("The number is even.\n");
            break;
        }
    }
    return 0;
}
