#include<iostream>
using namespace std;

int palindrome(int );

int palindrome(int num , int rev)
{
    int rem , temp;
    temp = num;
    for(; num > 0 ; num /= 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    if(temp == rev)
    return 1;
    else
    return 0;
}

int main(){
    int num;
    cout<<"Enter a number:-";
    cin>>num;
    int result = palindrome(num , 0);
    if(result == 1)
    cout<<"Palindrome.";
    else
    cout<<"Not palindrome.";

    return 0;
}