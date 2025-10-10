// Write a program to check whether a number is prime or not using for loop.

#include <stdio.h>
#include <math.h>

int isprime(int);

int isprime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        return 1;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 5; i <= sqrt(n); i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}
int main()
{

    int num;

    printf("Enter number:", num);
    scanf("%d\n", &num);

    if (isprime(num))
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}