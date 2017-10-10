#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";

	//TODO:
    // Print out the two arrays character-by-character
    for (int i = 0; i < 4; i++){
        printf("%c\t", char_array[0+i]);
    }
    for (int i = 0; i < 4; i++){
        printf("%c\t", char_array_the_same[0+i]);
    }
	//TODO:
    // What is the difference between the arrays? Nothing.

    return 0;
}
