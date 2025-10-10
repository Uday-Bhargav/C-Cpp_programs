//Write program 9 using while loop.

#include<stdio.h>

int main(){
    int n = 8 , i = 1 , fact = 1;

    if (n < 0)
    {
        printf("Negative number , Invalid!\n");
    }
    else if (n == 0 || n == 1)
    {
        printf("1");
    }
    else{
        while (i <= n)
        {
            fact *= i;
            i++;
        }
        
    }
    printf("The factorial of %d is: %d\n" , n , fact);
        
    return 0;        
}