//Sum of digits.

#include<iostream>
using namespace std;

int main()
{
    int num , sum = 0 , rem; 
    cout<<"Enter a number:";
    cin>>num;

    for(; num > 0 ; num = num / 10)
    {
        rem = num % 10;
        sum = sum + rem;
    }
    cout<<"Sum of given digits are: "<<sum;

    return 0;
}