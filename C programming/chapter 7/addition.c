#include<stdio.h>

int main(){
    int marks[5] = {10 , 20 , 30 , 40 , 50};

    int* ptr = marks;

    printf("%d\n" , (*ptr + 2));
    return 0;
}