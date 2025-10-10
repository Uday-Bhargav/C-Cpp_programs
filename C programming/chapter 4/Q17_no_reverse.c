#include <stdio.h>

int main()
{
    int num, rev = 0, rem, temp;

    printf("Enter a number :");
    scanf("%d", &num);

    temp = num;

    for (; num != 0; num = num / 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    printf("the reverse of %d is %d", num, rev);

    return 0;
}