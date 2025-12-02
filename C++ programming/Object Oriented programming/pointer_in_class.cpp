#include <iostream>
using namespace std;

class IT
{
private:
    int i;

public:
    void get()
    {
        cout << "Enter number of students: " << endl;
        cin >> i;
    }
    void show()
    {
        cout << "Number of students: " << i << endl;
    }
};

int main()
{
    IT obj;
    IT *ptr;
    ptr = &obj;
    ptr->get();
    ptr->show();
}