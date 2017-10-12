#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int r = rand() % 10 + 1;
    int guess;
    int counter = 6;
    int i = 0;
    int j = 100;
    printf("Guess my number! ");

    /*scanf("%d", &guess);
        if ((guess < i) || (guess > j)){
            printf("The number you quessd is not within range, enter a number between 0-100");
            }*/
    do {
        scanf("%d", &guess);
        if ((guess < i) || (guess > j)){
            counter--;
            printf("The number have to be between 0-100!");
            }
        if (guess == r) {
            printf("You guessed correctly! Congratulations!\n", counter);
           }
        if (guess < r) {
            counter--;
            printf("Your guess is too low. Guess again. ");
        }
        if (guess > r) {
            counter--;
            printf("Your guess is too high. Guess again. ");
        }
    } while (counter > 0);
    printf("\d", r);

    return 0;
}
