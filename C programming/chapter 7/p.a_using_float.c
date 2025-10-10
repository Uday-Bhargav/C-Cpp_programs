#include<stdio.h>

int main(){
    float a = 5;
    float* ptr = &a;

    printf("The address of a is %u\n" , &a);
    printf("The address of a is %u\n" , ptr);
    ptr++;
    printf("The address of a is %u\n" , ptr);
    
    return 0;
}