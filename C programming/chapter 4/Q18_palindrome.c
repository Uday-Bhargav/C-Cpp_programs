#include <stdio.h>
int main()
{
    int num, rev = 0, rem, temp;

    printf("Enter a number :");
    scanf("%d", &num);
    temp == num;

    for (; num != 0; num = num / 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    if (temp == rev)
    {
        printf("%d is a palindrome", num);
    }
    else
    {
        printf("%d is not a palindrome");
    }
    return 0;
}