#include <stdio.h>

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



