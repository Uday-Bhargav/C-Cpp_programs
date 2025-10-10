#include <stdio.h>

int main()
{
    int arr[5] = {8, 3, 5, 1, 2};
    int i, j, key;

    printf("Original array:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Insertion sort logic.

    for (int i = 1; i < 5; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("\nSorted array:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}