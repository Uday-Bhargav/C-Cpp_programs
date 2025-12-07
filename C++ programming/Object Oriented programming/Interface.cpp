/*Interface is a class in c++ that only contains pure virtual function.
It acts as a specification that all derived classes must follow.
No object for an interface can be created.*/

#include<iostream>
using namespace std;

class vehicle
{ // Abstract class.
public:
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
    vehicle *ptr;

    bike a;
    car b;

    ptr = &a;
    ptr -> start();
    ptr = &b;
    ptr -> start();

}