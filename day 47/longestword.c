//Find the longest word in a sentence.
#include<Stdio.h>
int main()
{
    char str[200], longest[100], current[100];
    int i, j, maxLength = 0, currentLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            current[currentLength++] = str[i];
        } else {
            if(currentLength > maxLength) {
                maxLength = currentLength;
                current[currentLength] = '\0';
                for(j = 0; j <= currentLength; j++) {
                    longest[j] = current[j];
                }
            }
            currentLength = 0;
        }
        if(str[i] == '\0' || str[i] == '\n') {
            break;
        }
    }

    if(maxLength > 0) {
        printf("Longest word: %s\n", longest);
    } else {
        printf("No words found.\n");
    }

    return 0;
}

