/*Using dynamic constructor memory can be dynamically allocated
using 'new' inside the constructor.*/

#include <iostream>
using namespace std;

class chocolate
{
private:
    int *ptr;

public:
    chocolate()
    {
        ptr = new int[5];
        for (int i = 0; i < 5; i++)
        {
            ptr[i] = i + 1;
        }
    }
    ~chocolate()
    {
        delete[] ptr; //Good practice to delete the memory after using it.
    }
    void show() // Member function.
    {
        // Showing the number of chocolates.
        cout << "Number of chocolates: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << ptr[i] << " ";
        }
        cout << endl;
        // I want to show the address of element that is chocolate in this
        // code, and for me address is shop's address.
        // for a better understanding only :)
        cout << "Address of shop: " << &ptr << endl;
    }
};

int main()
{
    chocolate obj;
    obj.show();

    chocolate *ptr;
    ptr = new chocolate();
    ptr->show();
    delete ptr;

    return 0;
}