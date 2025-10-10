/*Write a program to create an array of 10 integers and store multiplication
table of 5 in it.*/

#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of 5 X %d is %d\n" , i , arr[i]);
    }
    return 0;
}