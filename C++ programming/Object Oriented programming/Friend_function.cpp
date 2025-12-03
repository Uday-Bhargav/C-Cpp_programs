/*A friend function is not a member of a class but can access the private
and protected data of a class.*/

#include <iostream>
using namespace std;

class Ghar
{
private:
    int address;

protected:
    string area;

public:
    void get()
    {
        cout << "Enter address: " << endl;
        cin >> address;
        cout << "Enter area: " << endl;
        cin >> area;
    }
    //Friend function declaration.
    friend void dost(Ghar A);
};
void dost(Ghar A)//Friend function
{
    cout << "Ghar ka address: " << A.address << endl;
    cout << "Ghar ka area: " << A.area << endl;
}
int main()
{
    Ghar obj;
    obj.get();
    dost(obj);//calling of object

    return 0;
}