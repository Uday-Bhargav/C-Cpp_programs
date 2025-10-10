//armstrong number in while loop.

#include<iostream>
using namespace std;

int main()
{
    int num , sum = 0 , rem , temp;
    cout<<"Enter number:";
    cin>>num;

    temp = num;

    while(num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num /= 10;
    }

    if(sum == temp)
    cout<<temp<<" is a armstrong number.";
    else
    cout<<temp<<" is not a armstrong number.";

    return 0;
}