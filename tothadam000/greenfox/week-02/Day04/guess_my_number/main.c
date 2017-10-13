#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int r = rand() % 100+1;
    int guess = 0;
    int counter = 5;

    printf("I've the number between 1-100. You have 5 lives.");
    // printf("%d", r);

    do{
        scanf("%d", &guess);
        if (r == guess){
        counter = 0;
        printf("Congratulations. You won! \n");
        }
        if (r < guess){
        counter --;
        printf("Too high. You have %d lives left.\n", counter);
        }
        if (r > guess){
        counter --;
        printf("Too low. You have %d lives left.\n", counter);
        }

    } while (counter != 0);
        printf("The guessed number is %d\n", guess);

   return 0;
}
