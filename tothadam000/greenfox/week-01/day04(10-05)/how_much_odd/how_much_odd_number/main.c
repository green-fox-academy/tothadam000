#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{
    int start_number;
    int end_number;
    int counter = 0;

    printf("I print out the odd numbers between two numbers! \n");
    printf("Type the starting number:" );
    scanf("%d", &start_number);
    printf("Type the ending number:" );
    scanf("%d", &end_number);
    if (end_number <= start_number){
        printf("The starting number has to be the lowest number!");
        }

    for (int i = start_number; i < end_number; i++){
            if (i % 2 != 0){
            counter++;
            printf(" %d", i);
        }
    }
    printf("\n this is %d odd number(s) between %d and %d", counter, start_number ,end_number);

	return 0;
}
