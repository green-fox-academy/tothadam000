#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int main()
{
    int i_array[10] = {260, 259, 258, 257, 256, 255, 254, 253, 252, 251};
    unsigned char uc_array[10];

	//TODO: write a program, which copies the values from the given array to an unsigned char array
    //print out the elements of the unsigned char array, with the "%d" format specifier
    //what do you see? Overflow! We can solve it with uint16_t.

	for(int i = 0; i < 10; ++i) {
    uc_array[i] = i_array[i];
    printf("%d\n", uc_array[i]);
    }
    printf("\nOverflow! We can solve it with uint16_t.\n");

    return 0;
}

