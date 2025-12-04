/*Abstract class is a class that has at least one pure virtual
function and cannot be instantiated.
Object cannot be created for abstract classes but pointers can
be created at the place of objects.
It serves as a blueprint or template for other classes.*/

#include <iostream>
using namespace std;

class vehicle
{ // Abstract class.
public:
    virtual void show() = 0;
    virtual void start() = 0;
    // Pure virtual function.
    // That has no body or no code inside it.
};
class bike : public vehicle
{ // Child class.
public:
    void show() override
    {
        cout << "This is a bike." << endl;
        /*We must override pure virtual function in child class
        otherwise it will also become a abstract class.*/
    }
    void start() override
    {
        cout << "Bike Starts with the help of kick." << endl;
    }
};
class car : public vehicle
{ // Child class.
public:
    void show() override
    {
        cout << "This is a car." << endl;
        /*We must override pure virtual function in child class
        otherwise it will also become a abstract class.*/
    }
    void start() override
    {
        cout << "Car Starts with the help of Self starter." << endl;
    }
};

int main()
{
    // Object cannot be created for ojects.
    vehicle *ptr;

    bike a;
    car b;

    ptr = &a;
    ptr->show();
    ptr->start();

    ptr = &b;
    ptr->show();
    ptr->start();

    return 0;
}