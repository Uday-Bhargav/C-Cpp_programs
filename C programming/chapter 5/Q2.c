//convert celcius temprature to farhenite.

#include<stdio.h>

float c2f(float); //function prototype

float c2f(float c){
   return ((9.0 / 5.0) * c + 32); //function define
}
 
int main(){ //function call
    float a = 32.0;
    printf("celcius to farhenite of %.2f degree is %.2f degree" , a , c2f(a)); 
    
    return 0;
}