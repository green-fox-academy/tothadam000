#include <stdio.h>
#include <stdint.h>

int main()
{   // Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".
	// print the numbers till ad from 0
	int ad;
    char x[] = "Fizz";
    char y[] = "Buzz";
    char z[] = "FizzBuzz";
        for (ad = 0; ad <= 100; ad ++){
            if (ad % 3 == 0){
                printf("%s\n",x);
            } else if (ad % 5 == 0){
                printf("%s\n",y);
                    if (ad % 15 == 0)
                        printf("%s\n",z);
            } else printf( "%d \n", ad);
        }

	return 0;
}






