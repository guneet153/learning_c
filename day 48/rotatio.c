//Check if one string is a rotation of another.

#include<stdio.h>
int main()
{
    char str1[100], str2[100], temp[200];
    int i, j, len1 = 0, len2 = 0, isRotation = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Calculate lengths of both strings
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == '\n') break; // Ignore newline character
        len1++;
    }
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] == '\n') break; // Ignore newline character
        len2++;
    }

    // If lengths are not equal, they cannot be rotations
    if(len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself
    for(i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }
    for(i = 0; i < len1; i++) {
        temp[len1 + i] = str1[i];
    }
    temp[2 * len1] = '\0';

    // Check if str2 is a substring of temp
    for(i = 0; i <= 2 * len1 - len2; i++) {
        for(j = 0; j < len2; j++) {
            if(temp[i + j] != str2[j]) {
                break;
            }
        }
        if(j == len2) {
            isRotation = 1;
            break;
        }
    }

    if(isRotation) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}