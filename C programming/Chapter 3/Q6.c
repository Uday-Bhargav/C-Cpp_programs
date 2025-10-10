#include<stdio.h>

int main(){

   int a = 1, b = 2, c = 3, d = 4;
   
   if (a > b && a > c && a > d)
   {
        printf("The greatest of all numbers is %d" , a);
   }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest of all numbers is %d" , b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("The greatest of all numbers is %d" , c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("The greatest of all numbers is %d" , d);
    }
    
   
   return 0;
}