//Write a program to calculate the factorial of a given number using a for loop.

#include<stdio.h>

int main(){
    int n = 5 , i;
    int fact = 1;

    if(n < 0){
        printf("The number is negative , Invalid!\n");
    }
    else if (n == 0 || n == 1)
    {
        printf("1");
    }
    else{
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
    }
        printf("The factorial of %d is: %d\n" , n , fact);
        
        return 0;  
}