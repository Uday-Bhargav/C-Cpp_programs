/*Scope resolution operator is used to solve ambiguity error.*/

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
    obj.B1::get(); //Declaring scope resolution operator to
    obj.B2::get(); //solve ambiguity error.

    return 0;
}