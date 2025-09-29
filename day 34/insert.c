//Insert an element in an array at a given position.

#include<stdio.h>
int main()
{
    int arr[100], pos, i, n, val;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the position where you want to insert the element (0 to %d): ", n);
    scanf("%d", &pos);
    if(pos < 0 || pos > n)
    {
        printf("Invalid position!\n");
        return 1;
    }
    printf("Enter the value to be inserted: ");
    scanf("%d", &val);
    for(i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}