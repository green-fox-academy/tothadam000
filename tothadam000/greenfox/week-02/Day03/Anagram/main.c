#include <stdio.h>
#include <string.h>

int main(void)
{

char word[50];
char end;

printf("Enter a word and I'll give it to you backwards: ");

scanf("%s", word);

end = strlen(word) - 1;

for (int x = end; x >= 0; --x) {
    printf("%c", word[x]);
}

return 0;
}

