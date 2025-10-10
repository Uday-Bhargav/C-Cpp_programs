// Left Rotate the Array by 1 Position/.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int first = arr[0];

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;

    printf("Left rotated the array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}