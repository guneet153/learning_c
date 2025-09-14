//Write a program to find the product of odd digits of a number.

#include<stdio.h>
int main()
{
    int n, r, product = 1, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        if (r % 2 != 0)
        {
            product *= r;
            flag = 1;
        }
        n /= 10;
    }
    if (flag)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found.\n");
    return 0;
}