/*Wap to print array element and print even elements and count no. of even elements
and sum of all even elements.*/

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int sum = 0, even, count = 0;

    printf("\n==============================================\n");
    printf("Elements of array are:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n==============================================\n");
    printf("Even elements in array:\n");
    for (int i = 1; i <= 20; i += 2)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n==============================================\n");
    printf("Sum of all even elements are:\n");
    for (int i = 1; i <= 20; i += 2)
    {
        sum += arr[i];
    }
    printf("%d\t", sum);
    printf("\n==============================================\n");
    printf("Total Even elements in array:\n");
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            count++;
    }
    printf("%d\n", count);

    return 0;
}