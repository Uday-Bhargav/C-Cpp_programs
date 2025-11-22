// Opening the file and reading data.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    char data[50] = "Hello Uday how are you, Keep learning and growing.";

    fptr = fopen("flie.txt", "r");

    if (fptr == NULL)
    {
        printf("The file is not opened.\n");
    }
    else
    {
        printf("File is openend successfully\n");

        while (fgets(data, 50, fptr) != NULL)
        {

            printf("%s", data);
        }
        fclose(fptr);
    }

    return 0;
}