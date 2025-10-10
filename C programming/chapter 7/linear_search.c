#include <stdio.h>

int linearsearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {13, 452, 34, 546, 674, 2, 4, 42, 432, 234, 44, 27};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 234;

    int result = linearsearch(arr, size, key);

    if (result != -1)
    {
        printf("the element %d is found at index %d", key, result);
    }
    else
    {
        printf("Element not found!");
    }
    return 0;
}