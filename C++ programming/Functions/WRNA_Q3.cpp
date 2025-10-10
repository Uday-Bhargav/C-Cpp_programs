#include<iostream>
using namespace std;

int prime(void)
{
    int num , count = 0;
    cout<<"Enter a number:-";
    cin>>num;
    
    for(int i = 1 ; i <= 10 ; i++)
    {
        if(num % i == 0)
        count++;
    }

    if(count == 2)
    return 1;
    else
    return 0;
}

int main(){
    int result = prime();
    if(result == 1)
    cout<<"prime number.";
    else
    cout<<"Not a prime number.";

    return 0;
}