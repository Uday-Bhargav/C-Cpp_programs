/*Unions are user defined data types, in which all the data is saved in a 
single contiguous memory location.Or all the members are saved in a single
memory location.
The size of the union will always be equal to the size of the largest 
member of the union.*/

#include <iostream>
using namespace std;

union A {
    int x;
    char y;
};

union B {
    int arr[10];
    char y;
};

int main()
{
    // Finding size using sizeof() operator
    cout << "Sizeof A: " << sizeof(A) << endl;
    cout << "Sizeof B: " << sizeof(B) << endl;

    return 0;
}