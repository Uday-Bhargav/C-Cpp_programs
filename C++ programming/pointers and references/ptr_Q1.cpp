#include <iostream>
using namespace std;

int main()
{
    int x, *ptr;

    x = 10;

    ptr = &x; //Putting & will save the address of variable in pointer.

    cout << "Value of x is: " << x << endl;

    cout << "Address of x is: " << ptr << endl;

    cout << "Value of x using ptr is: " << *ptr << endl;

    return 0;
}