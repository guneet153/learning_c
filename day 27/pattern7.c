//Write a program to print the following pattern:
/*
*
***
*****
*******
*********
*******
*****
***
*
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<=(i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<=(i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}