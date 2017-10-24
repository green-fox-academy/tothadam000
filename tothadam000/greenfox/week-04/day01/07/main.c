#include <stdio.h>
    //TODO:
    // Please fix the problem and swap where the pointers point,
    // without using the "&" operator.

int main() {
    int high_number = 6655;
    int low_number = 2;
    int *temp = 0;
    int *high_number_pointer = &low_number;
    int *low_number_pointer = &high_number;

    temp = high_number_pointer;
    high_number_pointer = low_number_pointer;
    low_number_pointer = temp;
    printf("%d %d", high_number, low_number);

    return 0;
}
