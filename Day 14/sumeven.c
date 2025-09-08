//Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main()
{
    int n;
    unsigned long long product = 1; // Use unsigned long long to handle large products
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0) // Check if the number is even
        {
            product *= i;
        }
    }
    printf("Product of even numbers from 1 to %d is: %llu\n", n, product);
    return 0;
}