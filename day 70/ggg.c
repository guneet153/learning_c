//Write a program to take a string input. Change it to sentence case.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    // Convert first character to uppercase if it's a letter
    if(n > 0 && isalpha(str[0]))
    {
        str[0] = toupper(str[0]);
    }

    // Convert the rest of the characters to lowercase
    for(int i = 1; i < n; i++)
    {
        str[i] = tolower(str[i]);
    }

    printf("String in sentence case: %s", str);
    return 0;
}