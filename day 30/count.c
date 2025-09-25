//Count positive, negative, and zero elements in an array
#include<stdio.h>
int main()
{
    int n, positive=0, negative=0, zero=0;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            positive++;
        }
        else if(arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive numbers=%d\n", positive);
    printf("Negative numbers=%d\n", negative);
    printf("Zeroes=%d\n", zero);
    return 0;
}