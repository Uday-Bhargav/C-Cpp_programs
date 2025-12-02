/*Encapsulation is the process of binding data and functions
together in a single unit and protecting the data from direct access.*/

#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    void setname(string n)
    { // Setter to set name.
        name = n;
    }
    void setage(int a)
    { // Setter to set age.
        age = a;
    }
    string getname()
    {                // Getter to access private data.
        return name; // Returning private data.
    }
    int getage()
    {
        return age;
    }
};

int main()
{
    student s1;
    s1.setname("UDAY");
    s1.setage(19);

    cout << s1.getname() << endl;
    cout << s1.getage() << endl;

    return 0;
}