//In call-by-value, copy of actual data is passed to the function.

#include<iostream>
using namespace std;

void changevalue(int x)
{
    x = 20;
    cout<<"Value of x inside function: "<<x<<endl;
}
int main(){
    int a = 10;
    changevalue(a);
    cout<<"Value of a outside function: "<<a<<endl;
    return 0;
}