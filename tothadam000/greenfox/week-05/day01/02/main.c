#include <stdio.h>
#include <stdlib.h>
/*
 * Create an array of 12 integers. Fill it with random numbers.
 * Sort them in ascending order using bubble sort. -- Google it if You don't know it. (It's easy)
 * Print out the numbers before and after the sorting.
 */

int main()
{
    int array[12], n, c, d, swap;
    n = sizeof(array)/sizeof(array[0]);
    for (c = 0; c < n; c++){
        array[c] = rand()/2;
        printf("%d|", array[c]);
    }
    for (c = 0 ; c < ( n - 1 ); c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
          if (array[d] > array[d+1])
          {
            swap       = array[d];
            array[d]   = array[d+1];
            array[d+1] = swap;
          }
        }
    }
        printf("\n");
        printf("\nSorted list:\n");
    for ( c = 0 ; c < n ; c++ )
    {
        printf("%d|", array[c]);
    }
        printf("\n");
  return 0;
}
