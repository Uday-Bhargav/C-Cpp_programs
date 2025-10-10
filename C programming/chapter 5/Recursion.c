//Basic recursion concept with the help of factorial program.

#include<stdio.h>

int factorial(int);

int factorial(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}    

int main(){
    int n = 5;
    printf("the factorial of %d is : %d" , n , factorial(n));

    return 0;
}