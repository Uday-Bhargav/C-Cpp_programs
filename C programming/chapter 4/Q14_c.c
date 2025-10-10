//Using do-while loop.

#include<stdio.h>

int main(){
    int n , count = 0 , i = 1;

    printf("Enter number:" , n);
    scanf("%d" , &n);

    do 
    {
        if (n % i == 0)
        {
            count++;
        }  
        i++;
    }while(i <= n);
    
    if (count == 2)
    {
        printf("%d is a prime number" , n);
    }else{
        printf("%d is not a prime number" , n);
    }
    return 0;
}