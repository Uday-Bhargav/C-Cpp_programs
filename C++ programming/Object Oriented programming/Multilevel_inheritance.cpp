/*In multilevel inheritance a child class inherits the properties of
a base class, and another child class inherits the properties from a
derived class.
Real life example:-
Grand Father --> Father --> Son.*/

#include <iostream>
using namespace std;

class A
{
public:
    void a()
    {
        cout << "This is class A." << endl;
    }
};
class B : public A
{
public:
    void b()
    {
        cout << "This is class B." << endl;
    }
};
class C : public B
{
public:
    void c()
    {
        cout << "This is class C." << endl;
    }
};

int main()
{
    C obj;
    obj.a();
    obj.b();
    obj.c();

    return 0;
}