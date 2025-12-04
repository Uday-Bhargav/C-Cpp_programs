/*Operator overloading is the process of defining a additional
task to an operator with the help of a special function called operator
function.*/

#include <iostream>
using namespace std;

class op
{
private:
    int i, j, k, l;

public:
    op(int a, int b, int c, int d)
    {
        i = a;
        j = b;
        k = c;
        l = d;
    }
    void show()
    {
        cout << "Value of i:" << i << " " << j << " " << k << " " << l << " ";
    }
    void operator++()//pre-increment operator.
    {
        i++;
        j++;
        k++;
        l++;
    }
    
    void operator++(int)//post-increment operator.
    {
        i++;
        j++;
        k++;
        l++;
    }
};
int main()
{
    op obj(1, 2, 3, 4);
    cout << "Before increment :-" << endl;
    obj.show();
    obj++;
    cout << "\nAfter increment :-" << endl;
    obj.show();

    return 0;
}