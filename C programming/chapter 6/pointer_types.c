#include<stdio.h>

int main(){
    char i = 'A';
    char* j = &i;

    /*same for float point
    float k = 5.2;
    float* k = &k;*/


    printf("the address of i is %p\n" , j);

    return 0;
}