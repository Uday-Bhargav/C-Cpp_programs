// Reading a file in c.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r");

    if (fptr == NULL)
    {
        printf("The file is not opened");
        return 1;
    }
    else
    {
        printf("The file is created successfully.");
        fclose(fptr);
    }
    return 0;
}