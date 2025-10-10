#include<stdio.h>

int main(){
    char a = 5;
    char* ptr = &a;

    printf("The address of a is %u\n" , &a);
    printf("The address of a is %u\n" , ptr);
    ptr++;
    printf("The address of a is %u\n" , ptr);
    
    return 0;
}