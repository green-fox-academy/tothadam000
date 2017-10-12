#include <stdio.h>
#include <string.h>
void not_an_anagram();
int main(void)
{
    char word[50];
    char anagram_of_the_word[50];

    printf("Enter a word : ");
    scanf("%s", word);
    printf("Enter anagram of the word : ");
    scanf("%s", anagram_of_the_word);

    int equal = strcmp(word, anagram_of_the_word);
        if (equal != 0) {
            not_an_anagram();
        }
        else if (equal == 0) {
            for(int i = 0; i < 50; i++){
                for(int j = 0; j < 50; j++){
                    if (){
                        printf("It's an anagram!");
                    }else {
                        printf("It's not an anagram!");
                    }
                }
            }
        }
    return 0;
}

void not_an_anagram(){
    printf("Words are not anagrams!");
    }

