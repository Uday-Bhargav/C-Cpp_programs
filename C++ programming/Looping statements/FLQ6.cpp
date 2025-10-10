//Factorial of a given number.

#include<iostream>
using namespace std;

int main(){
    int num , fact = 1;

    cout<<"Enter a number:";
    cin>>num;

    for(;num > 0 ; num--)
    {
        fact = fact * num;
    }

    cout<<"Factorial of given number is: "<<fact;

    return 0;
}