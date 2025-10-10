//Palindrome number.

#include<iostream>
using namespace std;

int main()
{
    int num , rev = 0 ;
    int  rem , temp;
    cout<<"Enter number:";
    cin>>num;

    temp = num;

    for(; num > 0 ; num = num / 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    if(rev == temp)
    cout<<temp<<" is a palindrome number.";
    else
    cout<<temp<<" is not a palindrome number.";

    return 0;
}