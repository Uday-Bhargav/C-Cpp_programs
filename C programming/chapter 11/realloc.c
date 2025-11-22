/*realloc() function is used to resize a previously allocated
memory block. It allows you to change the size of an existing
memory allocation without needing to free the old memory and
allocate a new block.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int) * 5);

    ptr = (int *)realloc(ptr, sizeof(int) * 10);
    // Reallocated memory.
    
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

    return 0;
}