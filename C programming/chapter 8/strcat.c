#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "uday ";
    char s2[30] = "Bhargav";
    strcat(s1, s2);
    printf("%s %s", s1);
    return 0;
}