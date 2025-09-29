//Delete an element from an array.
#include<Stdio.h>
int main()
{
    int arr[100], pos, i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the position of the element to be deleted (0 to %d): ", n - 1);
    scanf("%d", &pos);
    if(pos < 0 || pos >= n)
    {
        printf("Invalid position!\n");
        return 1;
    }
    for(i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("Array after deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}