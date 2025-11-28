// book_struct.c
// Aim: Create Book struct, pass it to a function, and print details.

#include <stdio.h>
#include <string.h>

typedef struct {
    int book_id;
    char title[100];
    char author[100];
    float price;
} Book;

void print_book(Book b) {
    printf("------ Book Details ------\n");
    printf("Book ID : %d\n", b.book_id);
    printf("Title   : %s\n", b.title);
    printf("Author  : %s\n", b.author);
    printf("Price   : %.2f\n", b.price);
    printf("--------------------------\n");
}

int main(void) {
    Book mybook;
    mybook.book_id = 101;
    strncpy(mybook.title, "Programming in C", sizeof(mybook.title)-1);
    mybook.title[sizeof(mybook.title)-1] = '\0';
    strncpy(mybook.author, "Nawaz Mohd", sizeof(mybook.author)-1);
    mybook.author[sizeof(mybook.author)-1] = '\0';
    mybook.price = 299.50f;

    // pass struct by value
    print_book(mybook);

    return 0;
}