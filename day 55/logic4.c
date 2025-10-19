//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements of the array:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int majorityElement = -1;
    int majorityCount = n / 2;

    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(nums[j] == nums[i])
            {
                count++;
            }
        }
        if(count > majorityCount)
        {
            majorityElement = nums[i];
            break;
        }
    }

    printf("Majority element: %d\n", majorityElement);
    return 0;
}