//Prime number in do-while loop.

#include<iostream>
using namespace std;

int main()
{
    int num , count = 0 , i = 1;
    cout<<"Enter number:";
    cin>>num;

    do
    {
        if(num % i == 0)
        count++;
        i++;
    } while (i <= num);

    if(count == 2)
    cout<<num<<" is a prime number.";
    else
    cout<<num<<" is not a prime number.";

    return 0;
}