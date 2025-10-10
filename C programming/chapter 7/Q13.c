// Count even and odd numbers in an array.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even = 0, odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("even : %d\n odd : %d\n", even, odd);
    return 0;
}