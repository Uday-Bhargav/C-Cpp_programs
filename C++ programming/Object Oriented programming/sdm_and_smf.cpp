//Static data members and Static member functions.

#include<iostream>
using namespace std;

class IT
{
    private:
    static int i; //Static data member.

    public:
    static void increment() //Static member function.
    {
        i++;
        cout<<"Value of i: "<<i<<endl;
        cout<<"Address of i: "<<&i<<endl;
    }
};
//Initialization outside class.
int IT :: i;

int main(){
    IT obj1 , obj2, obj3;
    cout<<"for object obj1:"<<endl;
    obj1.increment();
    cout<<"for object obj2:"<<endl;
    obj2.increment();
    cout<<"for object obj3:"<<endl;
    obj3.increment();

    return 0;
}