/*In hierarchical inheritance more than one child class
inherits the property of a single base class.
Real life example:-
Branches of a tree(May thin branches come out from a single thick
or a root branch).*/

#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "A is the base class." << endl;
    }
};
class B : public A
{
public:
    void b()
    {
        cout << "Class B Inherited from class A." << endl;
    }
};
class C : public A
{
public:
    void c()
    {
        cout << "Class C inherited from class A." << endl;
    }
};
int main()
{
    B obj1;
    C obj2;
    obj1.show();
    obj1.b();
    obj2.show();
    obj2.c();

    return 0;
}