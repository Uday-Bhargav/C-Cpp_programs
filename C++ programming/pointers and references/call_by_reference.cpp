//In call-by-reference, the actual value is passed to function.

#include<iostream>
using namespace std;

void changevalue(int &x)// '&' is used for reference.
{
    x = 20;
    cout << "value of x inside function: "<<x<<endl;
}
int main(){
    int a = 10;
    changevalue(a);
    cout<<"value of a outside function: "<<a<<endl;
    return 0;
}