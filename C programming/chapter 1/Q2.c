/*
Calculate area of circle and modify the same program to calculate the volume of cylinder
with height and radius given.
*/
#include<stdio.h>

int main()
{
    int r = 8;
    int h = 4;
    printf("The area of circle with radius is %d and %f" , r , 3.14*r*r);
    printf("\nThe volume of cylinder with radius is %d\n and height is %d\n is %f", r , h , 3.14*r*r*h);
    return 0;
}