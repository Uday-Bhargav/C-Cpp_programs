//Write a program to accept marks of 5 students in an array and print them to the screen.

#include<stdio.h>

int main(){
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n" , &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The marks at index %d is : %d\n" , i , marks[i]);
    }
    return 0;
}