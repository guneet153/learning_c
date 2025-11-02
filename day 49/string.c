//Print the initials of a name.
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first initial
    if(name[0] != ' ' && name[0] != '\n')
    {
        printf("%c. ", name[0]);
    }

    // Print initials of middle and last names
    for(int i = 1; i < strlen(name); i++)
    {
        if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n')
        {
            printf("%c. ", name[i+1]);
        }
    }
    printf("\n");
    return 0;
}