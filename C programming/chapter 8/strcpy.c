#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "uday";
    char s2[30] = "";
    strcpy(s2, st);
    printf("%s %s\n", st, s2);
    return 0;
}