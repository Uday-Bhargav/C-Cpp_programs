/*A constructor is a special member function of a class
that is automatically executed when an object is created.

A destructor is a special member function of a class that
is automatically executed when an object goes out of scope
or is destroyed.
~(tild sign) is used for destructor.*/

#include <iostream>
using namespace std;

class mobile
{
public:
    mobile()//Constructor
    {
        cout << "Mobile is on.Inside constructor." << endl;
    }

    void call()//Member function
    {
        cout << "Calling someone." << endl;
    }

    ~mobile()//Destructor
    {
        cout << "Mobile is switched off.Inside destructor." << endl;
    }
};
int main()
{
    mobile m; // Object declaration.
    //Constructor is automatically called when an object is created.

    m.call();
    // When program ends object goes out of scope
    // and destructor gets automatically called.

    return 0;    
}