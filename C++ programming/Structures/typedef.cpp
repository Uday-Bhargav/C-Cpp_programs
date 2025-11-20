/*In C++, typedef is used to create an alias for an existing variable.
With the help of typedef we can create our own virtual datatype thatis not
a part of c++ but can be used as datatype.*/

#include <iostream>
using namespace std;

typedef struct uday
{
    int x, y;
} ub; // An alias is specified here.

int main()
{
    ub a = {1, 1};

    cout << a.x << " " << a.y << endl;
}