//Use pointer to struct to modify and display data using -> operator
#include <stdio.h>
struct Book {
    char title[100];
    char author[50];
    int pages;
};
void printBookDetails(struct Book *book) {
    printf("Book Title: %s", book->title);
    printf("Author: %s", book->author);
    printf("Number of Pages: %d\n", book->pages);
}
int main() {
    struct Book myBook;
    struct Book *bookPtr = &myBook;

    printf("Enter Book Title: ");
    getchar(); 
    fgets(bookPtr->title, sizeof(bookPtr->title), stdin);

    printf("Enter Author Name: ");
    fgets(bookPtr->author, sizeof(bookPtr->author), stdin);

    printf("Enter Number of Pages: ");
    scanf("%d", &bookPtr->pages);

    printf("\nBook Details:\n");
    printBookDetails(bookPtr);

    return 0;
}
