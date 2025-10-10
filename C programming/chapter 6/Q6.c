/*Try problem 3 using call by value and verify that it doesn't chnage the value of the said variable*/

#include<stdio.h>

void ten_times(int);

void ten_times(int a){
    a = a * 10;
}

int main(){
    int a = 10;
    printf("the value of a is %d\n" , a);
    ten_times(a);
    printf("The value of a is %d\n" , a);

    return 0;
}