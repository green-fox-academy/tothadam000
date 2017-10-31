#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */
void bubble_sort(int *array, uint8_t j);
int main()
{
    int array[255], n, c;
    n = sizeof(array) / sizeof(array[0]);

    srand(time(NULL));                      //fill the array
    for (c = 0; c < n; c++){
        array[c] = rand() % 1000;
        printf("%d|", array[c]);
    }
    bubble_sort(array, n);
    return 0;
}
void bubble_sort(int *array, uint8_t length)
{
    int d,i,c,swap;
    for (i = 0 ; i < (length - 1); i++)          //bubble sort
    {
        for (d = 0 ; d < length - i - 1; d++)
        {
          if (array[d] > array[d+1])
          {
            swap = array[d];
            array[d] = array[d+1];
            array[d+1] = swap;
          }
        }
    }
        printf("\n");
        printf("\nSorted list:\n");
    for (c = 0 ; c < length ; c++)
    {
        printf("%d|", array[c]);
    }
        printf("\n");
}
