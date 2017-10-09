#include <stdio.h>
#include <stdlib.h>
#include "num.h"
//#include "another_file.h"

// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file
int factorio(int num);

int main()
{
    int out = sum(num);
    printf("%d\n", out);

    return 0;
}
    int sum (num){
        int sum_num = 0;
        int i;
        for( i=1; i<=num; i++){
            sum_num = sum_num + i;
        }
        return sum_num;
    }



