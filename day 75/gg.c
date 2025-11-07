//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    FILE *file;
    char line[200];

    // Open the file in append mode
    file = fopen("info.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take user input for a new line of text
    printf("Enter a line of text to append: ");
    getchar(); // Clear the newline character from the buffer
    fgets(line, sizeof(line), stdin);

    // Append the text to the file
    fprintf(file, "%s", line);

    // Close the file
    fclose(file);

    // Confirm that the data was appended
    printf("Text successfully appended to info.txt\n");

    return 0;
}