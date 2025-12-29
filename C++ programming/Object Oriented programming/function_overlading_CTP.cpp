/*Function overloading means the use of same function or the
function of same to perform different tasks by passing number
of different arguments.
Function overloading is also known as 'Method overloading'.*/

#include <iostream>
using namespace std;

class fo
{
public:
    // 1.Addition of two integers.
    int add(int a, int b)
    {
        return a + b;
    }
    // 1.Addition of three integers.
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    // 1.Addition of two floating point numbers.
    float add(float a, float b)
    {
        return a + b;
    }
};
int main()
{
    fo obj;
    cout << "Addition of two integers: " << obj.add(1 , 1) << endl;
    cout << "Addition of three integers: " << obj.add(1 , 1 , 1) << endl;
    cout << "Addition of two floating point numbers: " << obj.add(1.2f , 2.1f) << endl;

    return 0;
}