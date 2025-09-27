//find the digit that occurs the most times in an integer number.
#include<Stdio.h>
int main()
{
    int n,rem,i,max=0,c=0,digit;
    int a[10]={0};
    printf("Enter an integer number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        a[rem]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            digit=i;
        }
    }
    printf("The digit that occurs the most times is %d and it occurs %d times.",digit,max);
    return 0;
}
