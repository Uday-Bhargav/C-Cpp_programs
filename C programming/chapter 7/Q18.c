// Remove Duplicate Elements.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 7, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array after removing all duplicates : ");

    for (int i = 0; i < size; i++)
    {
        int isduplicate = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isduplicate = 1;
                break;
            }
        }
        if (!isduplicate)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}