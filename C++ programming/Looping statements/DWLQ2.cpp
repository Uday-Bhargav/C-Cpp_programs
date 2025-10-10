//palindromme number in do-whil loop.

#include<iostream>
using namespace std;

int main()
{
    int num , rem = 0 , rev , temp;
    cout<<"Enter a number:";
    cin>>num;

    temp = num;

    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    } while (num > 0);

    if(rev == temp)
    cout<<temp<<" is a palindrome number.";
    else
    cout<<temp<<" is not a palindrome number.";   

    return 0;
    
}