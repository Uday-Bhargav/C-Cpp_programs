//write a function to calculate force of attraction on a body of mass m exerted by earth(g=9.8m/s^2).

#include<stdio.h>

float force(float);

float force(float mass){
    return mass * 9.8;
}

int main(){
    float m = 45.0;
    printf("the value of force 'f' is %.2f" , force(m));

    return 0;
}