#include <stdio.h>

int binarysearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 354, 6, 6, 65, 78, 8687, 8, 689, 678, 24};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 678;

    int result = binarysearch(arr, size, target);

    if (result != -1)
    {
        printf("The element %d is found at index %d", target, result);
    }
    else
    {
        printf("Given Element not found in array!");
    }
    return 0;
}

/*Binary search requires the array to be sorted in ascending (or descending) order.
Your array is not sorted, so the binary search will not work correctly.
It may return incorrect results or miss elements that do exist in the array*/ 