#include<stdio.h>

int main(){
    int marks[5] = {1 , 2 , 3 , 4 , 5};

    int* ptr1 = &marks[3];
    int* ptr2 = &marks[1];
    int diff = ptr1 - ptr2;

    printf("%d\n" , diff);

    return 0;
}