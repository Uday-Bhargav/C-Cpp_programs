/*A parameterized constructor where parameter has default arguments.*/

#include <iostream>
using namespace std;

class A
{
private:
    int x, y;

public:
    A(int p = 10, int q = 20)
    {
        x = p;
        y = q;
        cout << "p: " << x << " " << "q: " << y << endl;
    }
};

int main()
{
    A a1;
    A a2(1);
    A a3(1, 2);

    return 0;
}