/*
calculate simpleinterest for a set of values representing principal , rate of interest and
no. of years.
*/
#include<stdio.h>

int main()
{
    float p = 1000.0 , r = 8.1 , t = 4.0;

    printf("The value of simple interest is %f" , (p*r*t)/100);
    return 0;
}