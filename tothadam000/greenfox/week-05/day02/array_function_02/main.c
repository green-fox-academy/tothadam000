#include <stdio.h>
#include <stdlib.h>
/*
 * Create a structure to represent a list of numbers. The structure should know how many number it has stored.
 * Store the numbers in an array.
 * Create functions to:
 *    * Add a new number at the end.
 *    * Get a number at a given index.
 *    * Replace a number at a given index if it exists.
 *
 * If the array is too smal, create a new one, copy everything into it, add the new element and delete the old array.
 *
 * Test in the main function whether everything works.
 */
typedef struct {
    int num_array[255];
} numbers;

int main()
{
    printf("Hello world!\n");
    return 0;
}
