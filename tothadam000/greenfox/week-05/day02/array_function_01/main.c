#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
/*
 * Create a function that takes an array and it's length as arguments. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.
 *
 * Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
 * The function should return the index of the number when found or -1 if it's not part of the array.
 * IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
 *
 *
 * In the main function create an unsorted array filled with random numbers, Make it 50 long.
 * Try 2 scenarios:
 *    * In the first: You pick a random element in the unsorted array and check at which index it is after the array is sorted.
 *    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
 * Print out what You need to check these.
 */
int bubble_sort (int *array, int length);
int number_search(int *array, int length);
int main()
{
    int array[50];
    int length_of_array = 0;
    int c = 0;
    length_of_array = sizeof(array) / sizeof(array[0]);

    srand(time(NULL));                      //fill the array
    for (c = 0; c < length_of_array; c++){
        array[c] = rand() % 100;
        printf("%d|", array[c]);
    }
    bubble_sort(array, length_of_array);
    number_search(array, length_of_array);
}
int bubble_sort (int *array, int length)
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
    return *array;
}
int number_search(int *array, int length)
{
    int user_number = 0;
    printf("\nType the number what are you searching for:");
    scanf("%d", &user_number);
    int flag = 0;
    int i = 0;
    for(i = 0; i < length; i++)                                     //Searching for the number
    {
         //If element is found in the array
         if (array[i] == user_number)
        {
            flag = 1;
            printf("\n%d is found at position %d", user_number, i);
        }
    }
     //return 0;

     //If element is not found in array
     if(flag==0)
    {
        printf("\n%d is not found in the array.", user_number);
    }
    return -1;

}
