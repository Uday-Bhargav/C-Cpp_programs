#include<stdio.h>

int main(){
    int x = 72;
    printf("The value of x is %d\n" , x);
    printf("The address of x is %u\n" , &x);//&x determines the address of the variable
    // %u = unsigned integer
    printf("The address of x is %p\n" , &x);//another way of obtaining address is to write %p
    
    return 0;
}