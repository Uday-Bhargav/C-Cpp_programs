// Single inheritance.
/*Inheritance is a mechanism in which a class acquires
properties(data members) and behaviours(member functions)
from another class.*/

#include <iostream>
using namespace std;

class parent
{
protected:
    double a;

public:
    void get()
    {
        cout << "Address: " << endl;
        cin >> a;
    }
};
class child : public parent
{
public:
    void show()
    {
        cout << "Address: " << a << endl;
    }
};
int main()
{
    child obj;
    obj.get();
    obj.show();

    return 0;
}