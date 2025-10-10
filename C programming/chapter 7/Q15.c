// Check if an array is a palindrome.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ispalindrome = 1;

    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            ispalindrome = 0;
            break;
        }
    }
    if (ispalindrome)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
    return 0;
}