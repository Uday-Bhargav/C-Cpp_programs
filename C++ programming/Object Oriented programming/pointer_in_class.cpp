#include <iostream>
using namespace std;

class student
{
private:
    int *marks;

public:
    student(int m)
    {
        marks = new int;
        *marks = m;
    }
    void show()
    {
        cout << "Marks: " << *marks << endl;
    }
    ~student()
    {
        cout << "Memory freed." << endl;
    }
};
int main()
{
    student s1(95);
    s1.show();

    return 0;
}