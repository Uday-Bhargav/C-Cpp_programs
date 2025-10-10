//program for finding sum of even number and product of odd number.

#include<iostream>
using namespace std;

int main(){
    int num , sum = 0 , product = 1;
    cout<<"Enter a number:";
    cin>>num;

    for(int i = 1 ; i <= num ; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
        else
        {
            product *= i;
        }
    }

    cout<<"Sum of even numbers: "<<sum<<endl;
    cout<<"Product of odd numbers: "<<product<<endl;

    return 0;
}