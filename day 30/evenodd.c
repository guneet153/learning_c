//count even and odd numbers in an array.
#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even numbers=%d\n",even);
    printf("Odd numbers=%d\n",odd);
    return 0;
}