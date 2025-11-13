#include <iostream>
#include <string>
using namespace std;

struct one // structure initialization can be done with the help of keyword struct.
{
    int x;
    float y;
    char z;
    string w;
};

int main()
{
    one a = {1, 8.0, 'R', "Sir"};
    // values of variables can be done within curly braces{}.

    cout << a.x << " ";
    cout << a.y << " ";
    cout << a.z << " ";
    cout << a.w << endl;
    // We can access the members of a structure using dot(.) operator.

    a.y = 8.1;
    //We can also modify or update a member.

    cout<<a.y<<endl;

    return 0;
}