#include <stdio.h>

int main()
{
    int arr[] = {34, 23, 34, 4, 324};
    int i, j, temp;

    printf("Original array:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Bubble sort concept.
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}