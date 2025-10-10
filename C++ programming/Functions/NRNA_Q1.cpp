#include<iostream>
using namespace std;

void addition(void);  //fn. prototype

void addition(void)  //fn. define
{
   int a ,b;
   cout<<"Enter two numbers:-";
   cin>>a>>b;
   int sum = a + b;
   cout<<"Addition of "<<a<<" and "<<b<<" is "<<sum<<endl; 
}

int main(){
    addition();
    return 0;
}

