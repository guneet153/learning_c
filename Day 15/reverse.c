//Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int i,n,rev=0,sum=0,original;
    printf("enter no");
    scanf("%d",&n);
    original =n;
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        rev = rev *10 +i;
        sum =sum +i;
    }
    printf("the reverse of %d is %d \n", original , rev);
return 0;
}
