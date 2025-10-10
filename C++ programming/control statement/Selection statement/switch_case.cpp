#include<iostream>
using namespace std;

int main(){
    int a , b;
    char op;

    cout<<"Enter first number:";
    cin>>a;

    cout<<"Enter a operator(+ , - , * , / , %):";
    cin>>op;

    cout<<"Enter second number:";
    cin>>b;

    switch(op)
    {
        case '+':
        cout<<"Addition = "<<a + b;
        break;

        case '-':
        cout<<"substraction = "<<a - b;
        break;

        case '*':
        cout<<"Multiplication = "<<a * b;
        break;

        
        case '/':
        cout<<"Division = "<<a / b;
        break;

        
        case '%':
        cout<<"Remainder = "<<a % b;
        break;
    }

    return 0;
}