//find the average of three numbers.

#include<stdio.h>

float avg(int , int , int); //function prototype

float avg(int x , int y , int z){
    return (x + y + z)/3.0 ; //function define
}

int main(){
    int a = 60 , b = 75 , c = 86;
    printf("the average of three numbers is %f\n" , avg( a , b , c ) );

    return 0;

}