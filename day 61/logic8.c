//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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

    printf("First negative integers in each subarray of size %d: ", k);
    for(int i = 0; i <= n - k; i++)
    {
        int firstNegative = 0; // Default to 0 if no negative found
        for(int j = 0; j < k; j++)
        {
            if(arr[i + j] < 0)
            {
                firstNegative = arr[i + j];
                break;
            }
        }
        printf("%d", firstNegative);
        if(i != n - k)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}