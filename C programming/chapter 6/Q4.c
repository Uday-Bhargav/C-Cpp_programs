/*Write a program using function which calculates the sum and aveage of two numbers 
Use pointers and print the values of sum and average in main().*/

#include<stdio.h>

int* sum(int a , int b){
    int s = a + b;
    int* ptr = &s;
    printf("The sum is %d\n" , s);
    return ptr;
}

float* average(int a , int b){
    float avg = (a + b)/2.0;
    float* ptr = &avg;
    printf("The average is %.2f\n" , avg);
    return ptr;
}

int main(){
    int a = 4 , b = 6;
    int* ptr1;
    int* ptr2;

    printf("The address of sum is %u and average is %u\n" , ptr1 ,ptr2);

    return 0;
}