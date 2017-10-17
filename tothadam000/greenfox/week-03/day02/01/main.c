#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i = 2;
	float f = 13.5;
	float result;

	//TODO: print out the f/i quotient

	//QUESTION: do you need explicit conversion? Yes, int to float.

	result = f / (float) i;
    printf("%.2f", result);

    return 0;
}
