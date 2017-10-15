#include <stdio.h>
#include <stdlib.h>

//writing ABC with loop like this : aAbBcC...zZ

int main()
{
    char ch = 'a';
    char cha = 'A';

    printf("Alphabets from Aa - Zz are: \n");
    while(ch <= 'z' && cha <= 'Z')
    {
        printf("%c%c", ch ,cha);
        ch++;
        cha++;
    }
   return 0;
}
