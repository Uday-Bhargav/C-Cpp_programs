#include <iostream>
using namespace std;

int armstrong(int);

int armstrong(int num, int sum)
{

    int rem, temp;
    temp = num;
    for (; num > 0; num /= 10)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
    }

    if (temp == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cout << "Enter a number:-";
    cin >> num;
    int result = armstrong(num, 0);
    if (result == 1)
        cout << num << " is a armstrong number.";
    else
        cout << num << " is not a armstrong number.";

    return 0;
}