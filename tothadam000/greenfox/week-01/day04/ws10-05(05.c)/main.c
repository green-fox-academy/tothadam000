#include <stdio.h>

int main() {
	// print the even numbers till 20
	/*int a;

	for(a=0; a<=20; a++) {
            if (a%2 == 0){
                printf( "%d \n", a);
            }
            else {
                printf("\n");
            }
    }
	return 0;

}
*/


    int a = 1;

    do{
        if (a%2 == 0){


        printf("%d \n",a);
        }
         a++;
    }
    while(a<=20);

    return 0;
}


