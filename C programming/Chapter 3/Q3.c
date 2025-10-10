#include<stdio.h>
int main(){
     int income;
     float tax = 0;

     printf("Enter income:\n");
     scanf("%d\n" , &income);

     if (income < 250000)
     {
        tax = 0;
     }
     else if (income >= 250000 && income < 500000) 
     {
        tax = income * 0.05;
     }
     else if (income >= 500000 && income < 1000000)
     {
        tax = income * 0.20;
     }
     else if (income > 1000000)
     {
        tax = income * 0.30;
     }
     printf("the tax to be paid is %.2f\n" , tax);
      //%.2f gives 2 digit values after point.

     return 0;
}