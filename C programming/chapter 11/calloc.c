/*The calloc() (stands for contiguous allocation) function is similar
to malloc(), but it initializes the allocated memory to zero.
It is used when you need memory with default zero values.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)calloc(sizeof(int), 5);

    if (ptr == NULL)
    {
        printf("Allocation failed!");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);

    return 0;
}