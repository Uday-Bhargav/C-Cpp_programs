// write a program to print first n natural numbers using do-while loop.

#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter number:\n");
    scanf("%d", &n);

    printf("the first %d natural numbers are:\n", n);

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    printf("\n");

    return 0;
}