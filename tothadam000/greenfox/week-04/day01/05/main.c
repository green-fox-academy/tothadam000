#include <stdio.h>
//TODO:
    // The "number_pointer" should point to the third element of the array called "numbers",
    // than please print its value with it. Solve the problem without reusiong the "&" operator
    // for geting the address of the third element.

int main() {
    int numbers[] = {5, 6, 7, 8, 9};
    int* number_pointer = &numbers[0];

    number_pointer = numbers;
    printf("%d",  *number_pointer + 2);

    return 0;
}
