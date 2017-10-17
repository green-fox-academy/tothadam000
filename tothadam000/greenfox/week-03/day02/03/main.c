#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int itoa_a();
int itoa_b();
int a = 54325;
char buffer[20];

int main()
{
	//int a = 54325;
    //char buffer[20];

    //TODO: make an integer to string conversion with itoa(), first in binary, then decimal format
    // Store the string in buffer
    itoa_a();
    itoa_b();

    return 0;
}

int itoa_a()
{
    itoa(a,buffer,2);
    printf("Binary value = % s \n", buffer);
}

int itoa_b()
{
   itoa(a,buffer,10);
    printf("Decimal value = % s \n", buffer);
}




