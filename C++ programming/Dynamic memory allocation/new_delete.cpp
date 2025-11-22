/*The new operator in C++ allocates memory from the Free Store
(a portion of the heap).
delete operator is used to release dynamically allocated memory.
It deallocates memory that was previously allocated with new.*/

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int *ptr;

    ptr = new int[5];
    if (!ptr)
    {
        cout << "Allocation failed!";
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
        cout << ptr[i] << " ";
    }
    delete[] ptr;
}