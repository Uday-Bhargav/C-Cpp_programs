/*In C structures, functions were not allowed inside the structure
but in C++, we can declare the function inside the structure.
They are called member functions while the variables are called
data members.*/

#include <iostream>
using namespace std;

struct two
{
    int a, b;

    int sum()
    {
        return a + b;
    }
};

int main()
{
    two obj = {5, 5};

    cout << obj.a << " " << obj.b << endl
         << "sum = " << obj.sum();

    return 0;
}