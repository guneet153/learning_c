//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements of the array (from 0 to %d with one missing):\n", n - 1, n);
    for(int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int arraySum = 0;

    for(int i = 0; i < n - 1; i++)
    {
        arraySum += arr[i];
    }

    int missingNumber = totalSum - arraySum;
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}