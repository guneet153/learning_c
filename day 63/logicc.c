//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

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
    printf("Enter the value of k: ");
    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("Invalid value of k.\n");
        return 1;
    }

    // Simple selection sort approach to find kth smallest element
    for(int i = 0; i < k; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    return 0;
}