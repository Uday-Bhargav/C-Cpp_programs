#include<iostream>
using namespace std;

int main(){
    int pi , r , circumference;

    pi = 3.14;

    cout<<"Enter radius of circle:";
    cin>>r;

    circumference = 2 * pi * r;

    cout<<"circumference of circle with radius"<< r <<" is : "<<circumference<<endl;

    return 0;
}