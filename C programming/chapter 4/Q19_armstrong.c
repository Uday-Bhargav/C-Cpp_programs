/*Armstrong number is the number which gives the same number when cube of each digit of that number
is added.Eg:- 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153. */

#include <stdio.h>
int main()
{
    int num, sum = 0, rem;
    printf("Enter a number :");
    scanf("%d", &num);

    for (; num != 0; num = num / 10)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
    }
    if (sum == num)
    {
        printf("%d is a palindrome", num);
    }
    else
    {
        printf("%d is not a palindrome", num);
    }
    return 0;
}