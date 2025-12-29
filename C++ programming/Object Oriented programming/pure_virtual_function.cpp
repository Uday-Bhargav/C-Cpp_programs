/*Pure virtual function is a virtual function that is declared with 0 at the end,
and that has no body or code inside it, and it is initialized in base class.
It is called pure because it is 100% virtual.
A normal virtual function may be overridden.
A pure virtual function must be overridden.
Pure virtual function is used because sometimes base class  doesn't know
how the function should behave, it only knows that the function must exists.*/

#include <iostream>
using namespace std;

class shape
{
public:
    virtual void show() = 0; // Pure virtual function inside base class.
    // Because there are number of shapes so it is difficult for the base
    // class to tell the attributes of different shapes. And it is also
    // important to declare a member function so pure virtual function is declared.
};
class circle : public shape
{
    void show() override
    { // A derived class must override the pure virtual function.
        cout << "Circle is Round." << endl;
    }
};
int main()
{
    shape *ptr;

    circle obj;
    ptr = &obj;
    ptr->show();

    return 0;
}
