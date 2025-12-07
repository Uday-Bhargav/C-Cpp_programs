/*Abstract class is a class that has at least one pure virtual
function and cannot be instantiated.An abstract class can have 
some normal functions.
Object cannot be created for abstract classes but pointers can
be created at the place of objects.
It serves as a blueprint or template for other classes.*/

#include <iostream>
using namespace std;

class vehicle
{ // Abstract class.
public:
    virtual void show(){
        cout<<"They have wheels and require fuel to run."<<endl;
    };
    virtual void start() = 0;
    // Pure virtual function.
    // That has no body or no code inside it.
};
class bike : public vehicle
{ // Child class.
public:
    void start() override
    {
        cout << "Bike Starts with the help of kick." << endl;
    }
};
class car : public vehicle
{ // Child class.
public:
    void start() override
    {
        cout << "Car Starts with the help of Self starter." << endl;
    }
};

int main()
{
    // Object cannot be created for ojects.
    bike a;
    car b;

    a.show();
    a.start();
    b.show();
    b.start();

    return 0;
}