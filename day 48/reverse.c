//Reverse each word in a sentence without changing the word order.
#include<stdio.h>
int main()
{
    char str[200], result[200];
    int i, j, start, end, k = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;
            // Reverse the word from start to end
            for(j = end; j >= start; j--) {
                result[k++] = str[j];
            }
            if(str[i] == ' ') {
                result[k++] = ' '; // Add space after the word
            }
            start = i + 1; // Move to the start of the next word
        }
        if(str[i] == '\0' || str[i] == '\n') {
            break;
        }
    }
    result[k] = '\0'; // Null-terminate the result string

    printf("Sentence with each word reversed: %s\n", result);
    return 0;
}