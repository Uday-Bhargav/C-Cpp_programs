#include<iostream>
using namespace std;

int main(){
    int a , b , c;
    a=10,b=6,c=4;

    cout<<(a>b && a<c ? "True" : "false")<<endl;
    cout<<(a>b || a<c ? "true" : "false")<<endl;
    cout<<(a>b != a<c ? "true" : "false")<<endl;

    return 0;
}