#include <stdio.h>
#include <math.h>

// This program should work correctly with the following input: 20, 400

void muv(int a,int b,int *r1,int *r2)
{
    *p1=a+b;
    *p2=a-b;
}

int main(void)
{
    int x,y,i,j;
    x=6;
    y=7;
    muv(x,y,&i,&j);

    printf("%i %i",i,j);

    return 0;
}

