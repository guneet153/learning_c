//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int n=0;
    printf("enter no");
    scanf("%d", &n);
    int i=1,ans =1;
    while (i<=n)
    {
        ans =ans *i;
        i++;
    }
    printf("factorial of %d is %d\n",n,ans);
    return 0;

}
