#include <stdio.h>
//TODO: write a void function which calculates the sum and multiplication of x and y according to the function prototype.
//Use 'output parameters'. Print out these values.

void calc (int a, int b, int *p_sum, int *p_mul)
{
    *p_sum = a + b;
    *p_mul = a * b;
}

int main()
{
	int x = 5;
	int y = 8;

	int sum, mul;

	calc(x, y, &sum, &mul);
	printf("Sum of a and b: %d\nMultiplication of a and b: %d", sum , mul);

    return 0;
}
