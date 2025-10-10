//reverse multiplication table in do-while loop.

#include<iostream>
using namespace std;

int main()
{
    int n , i = 10;
    cout<<"Enter a number:";
    cin>>n;

    do 
    {
        cout<<n<<" X "<<i<<" = "<<n * i<<endl;
        i--;
    }while(i >= 1);

    return 0;
}