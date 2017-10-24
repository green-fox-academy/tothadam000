#include <stdio.h>
//TODO: implement your own strlen function.

int my_strlen(char *string);

int main()
{
	char my_string[50] = "Hello world!";
    int length = my_strlen(my_string);
    printf("The lenght of |%s| is %d.\n", my_string, length);

	return 0;
}

int my_strlen(char *string)
{
    int i = 0;
    for (i = 0; string[i] != '\0'; i++){}
    return i;
}
