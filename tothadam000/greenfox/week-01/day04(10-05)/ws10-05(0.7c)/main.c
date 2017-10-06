#include <stdio.h>
#include <stdlib.h>

/*
create a simple program which checks if the num is odd or even
*/

int main()
{
    int num;
    num = 32;

    switch (num%2) {
    case 1 : printf("The number is odd.");
        break;
    case 0 : printf("The number is even.");
        break;
    }

    return 0;
}
