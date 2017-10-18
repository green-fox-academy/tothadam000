#include <stdio.h>
#include <string.h>

int main()
{
    char string[256];
    printf("Type in a sentence:\n\n");
    gets(string);

    //TODO: write a c program which, splits a string to words by space
	//solve the problem with the proper string.h function

    char * token;
    //printf ("Splitting string \"%s\" into tokens:\n",string);
    token = strtok (string," ");
    while (token != NULL)
    {
    printf ("%s\n",token);
    token = strtok (NULL, " ");
  }
  return 0;
}

