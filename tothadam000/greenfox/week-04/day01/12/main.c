#include <stdio.h>
//TODO: write a function, which prints out the passed array's elements.

void print_array(int *array, int size);

int main()
{
	int a[] = {6, 8, 48, 1, -9, 89};
    print_array(a, (sizeof a / sizeof (int)));

	return 0;
}
void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

