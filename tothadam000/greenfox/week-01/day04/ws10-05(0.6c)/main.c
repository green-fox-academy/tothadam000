#include <stdio.h>
#include <stdint.h>

int main()
{   // Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".
	// print the numbers till ad from 0
	int ad;

        for ( ad = 0; ad <= 15; ad ++){
            printf( "%d \n", ad);

        if (ad % 3 == 0){

           printf("Fizz \n");
        }
        else {
            if (ad % 5 == 0){

                printf("Buzz \n");

            }
        }


        }
	return 0;
}


/*int ad = 1;

    do{
        if ( ad % 3 == 0 , ad % 5 ==0) {

        printf("Fizz \n" , "Buzz \n");
        }
        ad++;

    }
    while(ad<=100);

    return 0;
}
*/

