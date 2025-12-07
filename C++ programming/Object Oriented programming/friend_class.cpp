/*A friend class in c++ is a class which is declared inside another
class with the help of keyword friend. A friend class and all the member
functions of that friend class has the access to private and protected
members of another class.*/

// #include <iostream>
// using namespace std;

// class A
// {
// private:
//     int i;

// public:
//     void get()
//     {
//         cout << "Enter value of i: " << endl;
//         cin >> i;
//     }

//     friend class B; // friend class declaration.
// };
// class B
// {
// public:
//     void show(A b)
//     {
//         cout << "Value of i: " << b.i << endl;
//     }
// };

// int main()
// {
//     A obj1;
//     B obj2;
//     obj1.get();
//     obj2.show(obj1);

//     return 0;
// }

//Practical implementation code of friend class.
#include <iostream>
using namespace std;

class Bank
{
private:
    int balance;

public:
    void get()
    {
        cout << "Enter balance: " << endl;
        cin >> balance;
    }

    friend class Govt; // friend class declaration.
};
class Govt
{
public:
    void show(Bank b)
    {
        cout << "Balance: " << b.balance << endl;
    }
};

int main()
{
    Bank obj1;
    Govt obj2;
    obj1.get();
    obj2.show(obj1);

    return 0;
}