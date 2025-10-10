/*
calculate area of rectangle
b)using inputs supplied by the user
*/
#include <stdio.h>

int main()
{
    int length, breadth;
    printf("Enter length \n");
    scanf("%d", &length);
    printf("Enter breadth \n");
    scanf("%d", &breadth);
    printf("\nThe area of rectangle is %d", length * breadth);

    return 0;
}