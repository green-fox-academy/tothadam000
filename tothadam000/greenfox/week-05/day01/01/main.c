#include <stdio.h>
#include <stdlib.h>
/*
 * Create an array of 5 integers, fill it with random numbers.
 * Create an other of 7 integers.
 * Copy the contents of the first array into the second one in a way,
 * that the first and the last numbers of the second array are both 42,
 * and it contains all the elements of the first array.
 */

int main()
{
    int array[5];
    int other_array[7];
    int i;
    int temp;

    for (i = 0; i < 5; i++){
        array[i] = rand()/2;
        printf("%d|", array[i]);
    }
    printf("\n--------------------------------------\n");
    for(i = 0; i <= 6; i++){
        other_array[i+1] = array[i];
        other_array[0] = 42;
        other_array[6] = 42;
    }
     for(i = 0; i < 7; i++){
        printf("%d| ", other_array[i]);
     }
        printf("\n");

    return 0;
}
