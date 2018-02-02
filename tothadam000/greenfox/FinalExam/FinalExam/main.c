#include <stdio.h>
#include <stdlib.h>

//Create a function that takes an array of floats and returns with the average of the smallest and the highest value

float avarage();

int main()
{
    printf("%f", avarage());

    return 0;
}

float avarage(){
    float nummbers[] = {100.798, 2.6, 3.4, 7.0, 50.9};
    float highest;
    float smallest;

    highest = nummbers[0];

    int i = 0;

    for (i = 1; i < 5; i++)
    {
        if (highest < nummbers[i])
            highest = nummbers[i];
    }
    smallest = nummbers[0];

    int a = 0;

    for (a = 1; a < 5; a++)
    {
        if (smallest > nummbers[a])
            smallest = nummbers[a];
    }

    return (highest + smallest) / 2;
}


