/*Hybrid inheritance is a combination of Single inheritance,
multiple inheritance and heirarchical inheritance.
It is also known as "Diamond problem".
This problem can be solved using virtual inheritance.
We'll pass a single same copy of A's function to B and C.*/

#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Inside base class A." << endl;
    }
};
class B : virtual public A //Virtual inheritance
{
public:
    void show()
    {
        cout << "Inside derived class B." << endl;
    }
};
class C : virtual public A //Virtual inheritance
{
public:
    void show()
    {
        cout << "Inside derived class C." << endl;
    }
};
class D : public B, public C
{
public:
    void show()
    {
        A::show();
        B::show();
        C::show();
        cout << "Inside derived class D.";
    }
};
int main()
{
    D obj;
    obj.show();

    return 0;
}