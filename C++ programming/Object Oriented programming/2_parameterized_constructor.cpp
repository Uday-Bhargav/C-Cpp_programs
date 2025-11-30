// Constructor with parameter.

#include <iostream>
using namespace std;

class ABC
{
public:
    int x;
    ABC(int a)
    {
        x = a;
    }
    void show()
    {
        cout << "Value of x: " << x << endl;
    }
};

int main()
{
    ABC obj(8);
    obj.show();

    return 0;
}