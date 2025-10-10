//fibonnaci series in while loop.

#include<iostream>
using namespace std;

int main()
{
    int a = 0 , b = 1 , c , i = 1 ;

    while(i <= 10)
    {
        cout<<a<<"\t";
        c = a + b;
        a = b;
        b = c;
        i++;
    }

    return 0;
}