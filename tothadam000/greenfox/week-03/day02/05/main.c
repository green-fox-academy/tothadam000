#include <stdio.h>
#include <string.h>
#include <stdint.h>
//TODO: write a function which returns 485 as unsigned integer value
//put your return value in an integer variable in which you should have 229, and print it out
//try to figure out which type casting you should use

uint16_t value();

int main()
{
    int a = 229;
    a = value();
    printf("%d", a);

    return 0;
}

uint16_t value()
 {
    return 485;
 }
