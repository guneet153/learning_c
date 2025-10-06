//print each character of string in new line
#include<stdio.h>
int main()
{
    char str[100];
    int i = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Printing each character in a new line
    while(str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }
    
    return 0;
}