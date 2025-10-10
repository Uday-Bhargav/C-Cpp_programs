//write a program to print first n natural numbers using for loop.

#include<stdio.h>
int main(){
    int n = 1;

    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n" , n);
        n += 1;
    }
    return 0;
}