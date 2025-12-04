/*Virtual function is used to tell the compiler that which function to
call at runtime.
Virtual function ensures that base class pointer calls derived class function.*/

#include <iostream>
using namespace std;

class B
{
public:
    virtual void show() // Virtual keyword.
    {
        cout << "Inside Base class B." << endl;
    }
};
class D : public B
{
public:
    void show()
    {
        cout << "Inside derived class D." << endl;
    }
};
int main()
{
    B obj1;
    D obj2;

    B *ptr;
     ptr = &obj1;
    ptr->show();
    ptr = &obj2;
    ptr->show();

    return 0;
}