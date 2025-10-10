/*Use a library function to calculate the area of a square with side a.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a;
    cout << "Enter value of a:-";
    cin >> a;

    double area;
    area = pow(a, 2);
    cout << "Area of a square is " << area << endl;

    return 0;
}