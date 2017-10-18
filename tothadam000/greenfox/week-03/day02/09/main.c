#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long binary_number1;
    long long binary_number2;

    printf("Enter a binary number: ");
    scanf("%lld", &binary_number1);
    printf("Enter 2nd binary number: ");
    scanf("%lld", &binary_number2);

    int bn1 = convertBinaryToDecimal(binary_number1);
    int bn2 = convertBinaryToDecimal(binary_number2);
    int sum = bn1 + bn2;

    //printf("%lld in binary = %d in decimal", binary_number1, convertBinaryToDecimal(binary_number1));
    //printf("\n%lld in binary = %d in decimal", binary_number2, convertBinaryToDecimal(binary_number2));
    //printf("\nsum of two dec number: %d\n", sum);
    printf("Sum of the two binary numbers: %d\n", convertDecimalToBinary(sum));

    return 0;
}
int convertBinaryToDecimal(long long n)
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
        //printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

