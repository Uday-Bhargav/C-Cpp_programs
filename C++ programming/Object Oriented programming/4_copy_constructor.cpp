/*Creating a new object by copying the data of an
existing object.
A copy constructor is automatically called whenever a copy
of an object is needed.*/

#include <iostream>
using namespace std;

class IT
{
private:
    int n; // Data member. 

public:
    IT(int a) //Parameterized constructor.
    {
        n = a;
        cout << "Original number of students: " << n << endl;
    }
    // classname(const classname &object)
    // syntax for creating a copy.
    IT(const IT &obj) //Copy constructor.
    {
        n = obj.n; // creating a copy of existing object.
        cout << "Copy constructor." << endl;
        cout << "Copy of number of students: " << n << endl;
    }
};

int main()
{
    IT obj1(21); 
    IT obj2(obj1);

    return 0;
}