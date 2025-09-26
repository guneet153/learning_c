//Search for an element in an array using linear search.
#include<Stdio.h>
int main()
{
    int arr[100],n,i,search,g=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            g=1;
            break;
        }
    }
    if(g==1)
    {
        printf("Element found at position %d",i+1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
