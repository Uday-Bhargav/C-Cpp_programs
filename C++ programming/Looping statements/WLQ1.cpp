//palindrome number in while loop.

#include<iostream>
using namespace std;

int main()
{
    int num , rev = 0 , rem , temp;

    cout<<"Enter number:";
    cin>>num;

    temp = num;

    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(rev == temp){
        cout<<temp<<" is a palindrome number.";
    }else{
        cout<<temp<<" is not a palindrome number.";
    }
}