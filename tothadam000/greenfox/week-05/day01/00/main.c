#include <stdio.h>
#include <stdlib.h>
/*
 * Create an array of 5 integers.
 * Fill it with random integer numbers.
 * Print out the array elements in one line, divided by " | ".
 * Reverse the order of the numbers_in_the_array_ an print them out again.
 */

void main()
{
    int array[5];
    int temp = 0;
    int j = 0;
    int i;

    for (i = 0; i < 5; i++){
        array[i] = rand();
        printf("%d|", array[i]);
    }
    printf("\n");
    for(i = 0, j = 4; i <= j; i++, j--){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    for(i = 0; i < 5; i++){
        printf("%d| ", array[i]);
    }
}


