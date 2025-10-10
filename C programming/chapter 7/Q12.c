// Find the maximum and minimum element.

#include <stdio.h>

int main()
{
    int arr[] = {2, 45, 6, 546, 235, 345, 24};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0], min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("max: %d and min: %d\n", max, min);
    return 0;
}