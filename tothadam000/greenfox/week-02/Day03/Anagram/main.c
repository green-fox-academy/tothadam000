#include <stdio.h>
#include <string.h>

int main(void)
{
   /* char word[50];
    char angram_of_the_word[50];
    printf("Enter a word : ");
    scanf("%s", word);
    printf("Enter angram of the word : ");
    scanf("%s", angram_of_the_word);

    for(int i = 0; i < 50; i++){
        for(int j = 50; j > 0; j--){
            if(word[i] == angram_of_the_word[j])
                printf("It's an anagram!");
            else
                printf("It's not an anagram!");
        }
    }


   */






char word[50];
char end;

printf("Enter a word and I'll give it to you backwards: ");

scanf("%s", word);                                                  //WORD BACKWARD

end = strlen(word) - 1;

    printf("%s",word);
for (int x = end; x >= 0; --x) {
    printf("%c", word[x]);
}

return 0;
}

