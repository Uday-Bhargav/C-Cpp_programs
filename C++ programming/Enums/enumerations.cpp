/*In C++, enumeration is a user-defined data type that consists
of a set of named integer constants.
It is mainly useful when we have a small set of possible values
for an item like directions, days of week, etc.*/

#include <iostream>
using namespace std;

enum direction
{
    EAST,
    NORTH,
    WEST,
    SOUTH
};

int main()
{
    direction dir = NORTH;
    /*By default, the first name in an enum is assigned
    the integer value 0, and the subsequent ones are incremented by 1*/
    cout << dir << endl;
    return 0;
}