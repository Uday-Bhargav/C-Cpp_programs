/*In multiple inheritance a child class can be derived from more
than one parent class.*/

#include <iostream>
using namespace std;

class B1
{
protected:
    int i;

public:
    void get1()
    {
        cout << "Enter value of i: " << endl;
        cin >> i;
    }
};
class B2
{
protected:
    int j;

public:
    void get2()
    {
        cout << "Enter value of j: " << endl;
        cin >> j;
    }
};
class D : public B1, public B2
{
public:
    void show()
    {
        cout << "Multiplication of i and j: " << i * j << endl;
    }
};

int main()
{
    D obj;
    obj.get1();
    obj.get2();
    obj.show();

    return 0;
}

/*So sometimes when both the parent class have same function
name, then child class get confused that which property and behaviour
to inherit, and this gives a compiler error.
This error is known as ambiguity error.
We'll solve ambiguity error.*/