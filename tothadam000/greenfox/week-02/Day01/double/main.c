#include <stdio.h>
#include <stdlib.h>
#include "numdouble.h"
// create a function called `doubling` that doubles it's input parameter
// again the parameters value should be stored in a .h file

int doubling (int doubles);
int main()
{
    doubling(numdouble);

    return 0;
}
int doubling (int doubles){
    printf("%d\n" , doubles);
    return 0;
    }
