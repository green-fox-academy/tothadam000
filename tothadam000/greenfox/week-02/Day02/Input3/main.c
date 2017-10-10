#include <stdio.h>

char function();
int main()
{
    //as you know, a character is represented as a numeric value(ASCII value) in the memory
    //write a function which asks for one charcter and prints out the character in character format then in ASCII too

    function();

    return 0;
}
char function(char_to_ascii){
    printf("Type in one character then press enter: ");
    scanf("%c", &char_to_ascii);
    printf("ASCII value of %c = %d", char_to_ascii, char_to_ascii);
    return ;

}
