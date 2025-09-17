//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<Stdio.h>
int main()
{
    int n,i;
    float sum=0.0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(2*i)/(3+(i-1)*4);
    }
    printf("The sum of the series up to %d terms is: %.2f",n,sum);
    return 0;

}