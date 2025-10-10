//Program 5 using while loop.

#include<stdio.h>

int main(){
    int sum = 0;
    int i = 1;

    while(i <= 10){
        sum += i;
        i++;
    }
    
    printf("The sum of first ten natural number is : %d" , sum);

    return 0;
}