//Write a program to check if a number is prime or not.
#include<stdio.h>
int main()
{
    int i,n,a:
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    a=2;
    while(a<=n-1)
        {
            if(n%a==0)
            {
                printf("%d is not aprime number \n",n);
                break;
            }
            a++;
        }
    if(a==n)
    {
        printf("%d is a prime number \n",n)
            }
 return 0;
}
