#include<iostream>
using namespace std;

void fibonacci(int , int);

void fibonacci(int a , int b)
{
    int c;
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout<<a<<"\t";
        c = a + b;
        a = b;
        b = c;
    }
}

int main(){
    fibonacci(0 , 1);

    return 0;
}