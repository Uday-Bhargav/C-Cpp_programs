//Armstrong number or Narcissistic number.

#include<iostream>
using namespace std;

int main()
{
    int num , sum = 0 , rem , temp;
    cout<<"Enter a number:";
    cin>>num;

    temp = num;

    for(;num > 0 ; num /= 10)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
    }

    if(sum == temp)
    {
        cout<<temp<<" is a armstrong/narcissistic number.";
    }else{
        cout<<temp<<" is not a armstrong/narcissistic number.";
    }
    
    return 0;
}