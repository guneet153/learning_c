//Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main()
{
    int arr[100],n,i,element,position;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be inserted\n");
    scanf("%d",&element);
    // Find the position where the element should be inserted
    position = 0;
    while (position < n && arr[position] < element) {
        position++;
    }
    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element
    arr[position] = element;
    n++; // Increase the size of the array
    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}