//sum of digit in while loop.

#include<iostream>
using namespace std;

int main()
{
    int d , sum = 0 , rem , num;

    cout<<"Enter digit:";
    cin>>d;

    num = d;

    while(d > 0)
    {
        rem = d % 10;
        sum = sum + rem;
        d = d / 10;    
    }

    cout<<"sum of digits "<<num<<" = "<<sum;

    return 0;
}