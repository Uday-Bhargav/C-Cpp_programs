/*In method/function overriding the child class has the same function name
, same arguments , and smae return type as of the parent class.
Child class rewrites the parent function.
Method/function overriding is a runtime polymorphism because which
function will run will be decided at the runtime.*/

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() {   // parent function
//         cout << "Animal makes sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {   // overriding
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() {   // overriding
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {
//     Animal *a;

//     Dog d;
//     Cat c;

//     a = &d;
//     a->sound();   // Dog barks (overriding)

//     a = &c;
//     a->sound();   // Cat meows (overriding)

//     return 0;
// }
/*Outpu:-
Dog barks
Cat meows*/

#include <iostream>
using namespace std;

class B
{
public:
    void show() //Overriden.
    {
        cout << "Inside base class B." << endl;
    }
};
class D : public B
{
public:
    void show() //Overriding method.
    {
        cout << "Inside derived class D." << endl;
    }
};
int main()
{
    D obj;
    obj.show();

    return 0;
}