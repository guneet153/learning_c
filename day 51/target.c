//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include<stdio.h>
int main()
{
    int n, target, firstIndex = -1, lastIndex = -1;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements in sorted order:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target integer: ");
    scanf("%d", &target);

    // Find first occurrence
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            firstIndex = i;
            break;
        }
    }

    // Find last occurrence
    for(int i = n - 1; i >= 0; i--)
    {
        if(nums[i] == target)
        {
            lastIndex = i;
            break;
        }
    }

    printf("First and Last occurrence of %d: %d, %d\n", target, firstIndex, lastIndex);
    return 0;
}