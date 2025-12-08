/*Exception handling in c++ is the mechanism used to detect and handle
runtime error and take appropriate action, so that the program does not
crash, but continues to execute safely.*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, x;
    cout << "Enter value of a: " << endl;
    cin >> a;
    cout << "Enter value of b: " << endl;
    cin >> b;
    x = a - b;

    try
    {
        cout << "Inside try block." << endl;
        if (x != 0)
        {
            cout << "Value of a/x: " << a / x << endl;
        }
        else
        {
            throw x;
        }
    }
    catch (int x)
    {
        cout << "Inside catch block." << endl;
        cout << "Value of x: " << x << endl;
    }
    cout << "Out of each block." << endl;

    return 0;
}