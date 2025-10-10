#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i;//pointer,pointing towards i or storing the value of i

    printf("The value of i is %d\n" , i);
    printf("The address of i is %u\n" , j);
    
    return 0;
}