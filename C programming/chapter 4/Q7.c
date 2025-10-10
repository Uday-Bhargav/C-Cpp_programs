//program 5 using do-while loop.

#include<stdio.h>

int main(){
    int sum = 0;
    int i = 1;   
   
    do
    {
       sum += i;
       i++; 
    } while (i <= 10);

    printf("The sum of first ten natural number is : %d" , sum);

    return 0;
}
    

