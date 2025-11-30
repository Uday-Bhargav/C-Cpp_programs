// Also known as constructor overloading or overloaded contructor.
// A class having more than one constructor with different
// parameter lists.

#include <iostream>
using namespace std;

class ABC
{
private:
    int a, b;
    //Data members.

public:
    ABC()
    {
        cout << "Default constructor." << endl;
    }
    ABC(int x)
    {
        a = x;
        cout << "Constructor with one parameter." << endl;
        cout << "Value of a: " << a << endl;
    }
    ABC(int x, int y)
    {
        a = x;
        b = y;
        cout << "Constructor with multiple parameter." << endl;
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};

int main()
{
    ABC obj1;
    ABC obj2(1);
    ABC obj3(1, 2);

    return 0;
}