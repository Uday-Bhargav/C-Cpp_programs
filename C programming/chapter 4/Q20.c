/*wap to sum the digits of a number*/

#include <stdio.h>
int main()
{
    int num, sum = 0, rem;

    printf("Enter a number :");
    scanf("%d", &num);

    for (; num != 0; num /= 10)
    {
        rem = num % 10;
        sum += rem;
    }
    printf("The sum of digits of %d is %d", num, sum);

    return 0;
}