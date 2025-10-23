//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include<stdio.h>
int main()
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of subarray k: ");
    scanf("%d", &k);

    if(k > n || k <= 0)
    {
        printf("Invalid subarray size k.\n");
        return 1;
    }

    int maxSum = 0;

    for(int i = 0; i <= n - k; i++)
    {
        int currentSum = 0;
        for(int j = 0; j < k; j++)
        {
            currentSum += arr[i + j];
        }
        if(currentSum > maxSum || i == 0)
        {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of all subarrays of size %d: %d\n", k, maxSum);
    return 0;
}