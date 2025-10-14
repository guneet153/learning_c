//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include<stdio.h>
#include<string.h>
int main()
{
    char date[15];
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Find the position of the first and second '/'
    int firstSlash = -1, secondSlash = -1;
    for(int i = 0; i < strlen(date); i++)
    {
        if(date[i] == '/')
        {
            if(firstSlash == -1)
            {
                firstSlash = i;
            }
            else
            {
                secondSlash = i;
                break;
            }
        }
    }

    // Check if the format is correct
    if(firstSlash != -1 && secondSlash != -1 && (secondSlash - firstSlash == 3))
    {
        // Replace "04" with "Apr"
        date[firstSlash + 1] = 'A';
        date[firstSlash + 2] = 'p';
        date[firstSlash + 3] = 'r';

        printf("Date in dd-Apr-yyyy format: %s", date);
    }
    else
    {
        printf("Invalid date format.\n");
    }

    return 0;
}