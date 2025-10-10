#include <stdio.h>

int main()
{
    int arr[] = {657, 5345, 6789, 435, 546, 7, 567, 13};
    int i, j, min_idx, temp;

    printf("Oringinal array :");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < 8 - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    printf("\nSorted array :");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}