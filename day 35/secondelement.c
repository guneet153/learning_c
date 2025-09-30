//Find the second largest element in an array.
#include<stdio.h>
int main()
{
    int arr[100],n,i,first,second;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(n<2)
    {
        printf("Invalid Input\n");
        return 0;
    }
    first=second=-2147483648;
    for(i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
            second=arr[i];
    }
    if(second==-2147483648)
        printf("There is no second largest element\n");
    else
        printf("The second largest element is %d\n",second);
    return 0;
    //
}