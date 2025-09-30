//Rotate an array to the right by k positions.
#include<stdio.h>
int main()
{
    int arr[100],n,i,k,temp;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter number of positions to rotate\n");
    scanf("%d",&k);
    k = k % n; // In case k is greater than n
    // Rotate the array to the right by k positions
    for(i=0;i<k;i++)
    {
        temp = arr[n-1];
        for(int j=n-1;j>0;j--)
            arr[j] = arr[j-1];
        arr[0] = temp;
    }
    printf("Array after rotation:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
    //
}