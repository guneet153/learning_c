//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d elements of the first sorted array:\n", m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d elements of the second sorted array:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int mergedSize = m + n;
    int mergedArray[mergedSize];
    int i = 0, j = 0, k = 0;

    // Merging both arrays
    while(i < m && j < n)
    {
        if(arr1[i] < arr2[j])
        {
            mergedArray[k++] = arr1[i++];
        }
        else
        {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while(i < m)
    {
        mergedArray[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while(j < n)
    {
        mergedArray[k++] = arr2[j++];
    }

    // Print the merged sorted array
    printf("Merged sorted array: ");
    for(int x = 0; x < mergedSize; x++)
    {
        printf("%d", mergedArray[x]);
        if(x != mergedSize - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}