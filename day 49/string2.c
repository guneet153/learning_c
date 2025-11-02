//Print initials of a name with the surname displayed in full.
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

    int len = strlen(name);
    int lastSpaceIndex = -1;

    // Find the index of the last space in the name
    for(int i = 0; i < len; i++)
    {
        if(name[i] == ' ')
        {
            lastSpaceIndex = i;
        }
    }

    // Print initials of middle names
    for(int i = 1; i < lastSpaceIndex; i++)
    {
        if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n')
        {
            printf("%c. ", name[i+1]);
        }
    }

    // Print the surname in full
    if(lastSpaceIndex != -1 && lastSpaceIndex + 1 < len)
    {
        printf("%s", &name[lastSpaceIndex + 1]);
    }

    return 0;
}