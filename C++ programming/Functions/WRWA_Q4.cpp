#include <iostream>
using namespace std;

int evenodd(int); // fn. prototype

int evenodd(int num) // fn. define
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cout << "Enter a number:-";
    cin >> num;
    int result = evenodd(num);
    if (result == 1)
        cout << "Even number";
    else
        cout << "Odd number";

    return 0;
}