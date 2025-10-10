#include <stdio.h>

int main()
{
    //char st[] = {'u', 'd', 'a', 'y', '\0'};
    char st[]="uday";
    for (int i = 0; i < 4; i++)
    {
        printf("%c", st[i]);
    }

    return 0;
}