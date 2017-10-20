#include <stdio.h>
#include <stdlib.h>
//TODO: write a program which asks for two binary numbers.
//write a function, which prints out the sum of the 2 binary numbers.

int main()
{
    int binary_number1;
    int binary_number2;

    printf("Enter a binary number: ");
    scanf("%d", &binary_number1);
    printf("Enter 2nd binary number: ");
    scanf("%d", &binary_number2);

    int bn1 = convertBinaryToDecimal(binary_number1);
    int bn2 = convertBinaryToDecimal(binary_number2);
    int sum = bn1 + bn2;

    printf("%d in binary = %d in decimal", binary_number1, convertBinaryToDecimal(binary_number1));
    printf("\n%d in binary = %d in decimal", binary_number2, convertBinaryToDecimal(binary_number2));
    printf("\nsum of two dec number: %d\n", sum);
    printf("Sum of the two binary numbers: %d\n", convertDecimalToBinary(sum));

    return 0;
}
int convertBinaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n = n/10;
        decimalNumber = decimalNumber + remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
int convertDecimalToBinary(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

