#include<iostream>
using namespace std;

int main(){
    int marks;
    
    cout<<"Enter marks:";
    cin>>marks;

    cout<<(marks>=33 ? "Pass" : "Fail")<<endl;
    return 0;
}