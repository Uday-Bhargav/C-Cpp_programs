/*Write a program to change the value of a variable to ten time of its current value
.Write a function and pass the value by refernce*/

#include<stdio.h>

void ten_times(int*);

void ten_times(int* i){
    *i = *i * 10;
}

int main(){
    int* i = 2;
    printf("The value of i is %d\n" , i);
    ten_times(&i);
    printf("The value of i is %d\n" , i);

    return 0;
}