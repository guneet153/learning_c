//Find the maximum and minimum element in an array.
#include<Stdio.h>
int main()
{
    int n, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(i == 0)
        {
            max = arr[i];
            min = arr[i];
        }
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    return 0;
    // 
}