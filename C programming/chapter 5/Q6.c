/*write a recursive function to calculate the sum of first
n natural numbers.*/

#include <stdio.h>

int sum(int);

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n = 8;

    printf("the sum of first %d natural numbers is : %d", n, sum(n));

    return 0;
}
