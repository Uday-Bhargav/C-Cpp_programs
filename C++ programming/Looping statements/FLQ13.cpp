//Reversing a number.

#include<iostream>
using namespace std;

int main()
{
    int num , rev = 0 , temp , rem;
    cout<<"Enter a number:";
    cin>>num;

    temp = num;

    for(;num > 0 ; num /=10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }

    cout<<"Your number is "<<temp<<" and reversed number is : "<<rev;

    return 0;
}