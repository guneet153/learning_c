//Write a program to print the following pattern:
/*
*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=n-i+1;k<=n;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}

