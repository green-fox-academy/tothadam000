#include <stdio.h>

/*
Write a program where you have five functions
first the program should ask for an integer, then
these functions should do various mathematical operations on a given integer
last but not least there should be a variable which counts how many operations
have been done on the given integer
*/
int counter = 0;
int main()
{
    int the_number;

    multiplication();
    division();
    addition();
    subtraction();
    printf("%d", counter);

}

void addition(){
    counter++;
    printf("Add \n");
}

void subtraction(){
    counter++;
    printf("subtraction \n");
}

void multiplication(){
    counter++;
    printf("multiplication \n");
}

void modulo(){
    counter++;
    printf("modulo \n");
}

void division(){
    counter++;
    printf("Division \n");
}



