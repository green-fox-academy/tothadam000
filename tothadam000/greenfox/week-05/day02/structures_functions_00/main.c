#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Create a structure representing the data of a book:
 *    * Title
 *    * Author
 *    * Year of publication
 *
 * Create functions for:
 *    * Creating a new book.
 *    * Changing or setting the Title
 *    * Changing or setting the Author
 *    * Changing or setting the Year of publication
 *    * Getting each of these separately by a single function each.
 *
 * IMPORTANT: The first parameter of each function should be a "Book", a variable of the type of this structure.
 *
 * Create a main where You demonstrate that each of these works and print out the necessary info.
 * IMPORTANT: You should only print from the main function. All other functions should return the info needed.
 */

int book_counter = 0;

typedef struct {
    char title[20];
    char author[20];
    int year_of_publication;
} Book;


void set_title(Book library[], char tit[], int index);
void set_author(Book library[], char aut[], int index);
void set_year(Book library[], int year[], int index);
//helper functions
int create_book(Book library[], char tit[], char aut[], int year[]);

int main()
{
    char tit[50];
    char aut[50];
    int year;

    printf("Type the title:\n");
    scanf("%s", tit);
    printf("Type the author:\n");
    gets(aut);
    printf("Type the year of publication:\n");
    scanf("%d", &year);

    Book library[10];
    create_book(library, tit, aut, year);

    printf("Title: %s\nAuthor: %s\nYear of publication: %d\n\n", library[0].title, library[0].author, library[0].year_of_publication);
}

int create_book(Book library[], char tit[], char aut[], int year[])
{
    strcpy(library[book_counter].title, tit);   //assigning value to one element of library's data member
    strcpy(library[book_counter].author, aut);   //assigning value to one element of library's data member
    library[book_counter].year_of_publication = year;          //assigning value to one element of library's data member
    book_counter++;

}
