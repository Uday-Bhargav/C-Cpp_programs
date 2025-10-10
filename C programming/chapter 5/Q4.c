/*Write a program using recursion to calculate nth element of
fibonacci series.*/

#include<stdio.h>

int fibonacci(int);

int fibonacci(int n){
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }    
}

int main(){
    int n = 8;
    printf("the fibonacci series of %d is : %d" , n , fibonacci(n));

    return 0;

}