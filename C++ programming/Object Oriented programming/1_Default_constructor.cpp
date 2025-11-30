// Constructor with no parameter.

#include <iostream>
using namespace std;

class ABC
{
public:
    ABC()
    {
        cout << "Default constructor." << endl;
    }
};

int main()
{
    ABC obj;

    return 0;
}