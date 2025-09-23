//Write a program to print all the prime numbers from 1 to n
#include<Stdio.h>
int main()
{
    int n, i, j, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are: \n", n);
    for(i=2; i<=n; i++)
    {
        flag = 0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", i);
    }
    return 0;
    // 
}