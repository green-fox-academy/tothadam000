#include <stdio.h>
#include <limits.h>

int main()
{
	int number_array[8] = {48, 59, 2, -8, 55, 56, 78, 12};

	//TODO:
	// Write a C program to find the two largest element in an array using only 1 for loop
	// From <limits.h> use INT_MIN: this is the least integer
	int min,max;
    min=INT_MAX;    // a lehetõ legnagyobb egész érték
    max=INT_MIN;    // a lehetõ legkisebb egész érték

    for(int i=0; i<1; i++) {
    if(min > number_array) min=number_array[8];
    if(max < number_array) max=number_array[8];
}
    printf("Min: %d Max: %d", min,max);

	return 0;
}
