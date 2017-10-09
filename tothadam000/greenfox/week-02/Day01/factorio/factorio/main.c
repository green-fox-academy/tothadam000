#include <stdio.h>
#include <stdlib.h>
#include "number.h"
// create a function called `factorio`
// that returns it's input's factorial with and without recursion
// again the parameters value should be stored in a .h file
//
int factorio_recursion(int num);
int factorio(int num);
int main()
{
    printf ("%d\n", factorio(x));
    printf ("%d\n", factorio_recursion(x));
    return 0;
}
int factorio(int num){
    int fact = 1;
    int i;
    for (i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}

int factorio_recursion(int num){
    if (num <= 1) {
        return 1;
    }
    return factorio_recursion(num - 1 )* num;
}
