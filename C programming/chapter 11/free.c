/*The memory allocated using functions malloc() and calloc()
is not de-allocated on their own. The free() function is used
to release dynamically allocated memory back to the operating
system. It is essential to free memory that is no longer needed
to avoid memory leaks.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int) * 5);

    if (ptr == NULL)
    {
        printf("Allocation failed!");
        exit(0);
    }

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    //Releasing memory back to operating system.

    return 0;
}