//Write a program to swap the first and last digit of a number.
#include<stdio.h>
int main()
{
    int n, first, last, digits, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    