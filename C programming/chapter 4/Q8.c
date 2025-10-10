//Write a program to calculate the sum of the numbers occuring in the multiplication table of 8.
//Consider 8x1 to 8X10.

#include<stdio.h>

int main(){
    int n = 8;
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += n * i;
        printf("%d X %d = %d\n" , n , i , n * i);
    }

    printf("sum of no.'s occuring in the multiplication table of 8 is: %d\n" , sum);

    return 0;
}