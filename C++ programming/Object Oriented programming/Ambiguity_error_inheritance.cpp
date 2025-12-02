/*Ambiguity error occurs when two or more functions of the same name
is there and compiler or derived class gets confused which one
to use.
It mostly occurs in multiple inheritance and hybrid inheritance.*/

#include <iostream>
using namespace std;

class B1
{
public:
    void get()
    {
        cout << "In class B1" << endl;
    }
};
class B2
{
public:
    void get()
    {
        cout << "In class B2" << endl;
    }
};
class D : public B1, public B2
{
};

int main()
{
    D obj;
    obj.get();
    obj.get();

    return 0;
}

/*So the solution for ambiguity error is scope resolution operator.*/