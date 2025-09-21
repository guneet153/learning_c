//Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main()
{
    int i,j,k,space;
    for(i=1;i<=4;i++)
    {
        for(space=1;space<=(4-i);space++)
        {
            printf(" ");
        }
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
    for(i=3;i>=1;i--)
    {
        for(space=1;space<=(4-i);space++)
        {
            printf(" ");
        }
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