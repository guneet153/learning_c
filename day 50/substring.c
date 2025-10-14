//Print all sub-strings of a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Sub-strings of the given string are:\n");
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}