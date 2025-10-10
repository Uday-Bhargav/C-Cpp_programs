/*Repeat problem 3 using user defined input.*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d is %d\n" , n , i , arr[i]);
    }
    return 0;
}