// Find Second Largest Element.

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {21, 4, 4, 5, 7, 54, 879, 2354, 456, 546, 78};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
    {
        printf("NO SECOND LARGEST ELEMENT FOUND!");
    }
    else
    {
        printf("The second largest element in the array is %d", second_largest);
    }
    return 0;
}