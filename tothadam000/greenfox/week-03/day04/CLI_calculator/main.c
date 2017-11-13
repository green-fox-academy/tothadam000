#include <stdio.h>

int main(){
    int integers[] = {12,23,34,45,56,67,78,89,90};
    int* apointer = integers;
    printf("address\t\tvalue\n%p\t%d\n",apointer, *apointer);
    apointer+=3;
    printf("%p\t%d\n",apointer, *apointer);
    printf("-------------------------------\n\n");

    for(int* ptr = integers; ptr-integers < 9; ptr++){
        printf("%p\t%d\n", ptr, *ptr);
    }
    return 0;
}
