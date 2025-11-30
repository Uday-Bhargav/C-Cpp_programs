#include <iostream>
using namespace std;

class car
{
public:
    // Data members
    string brand;
    int speed;

    // member function
    void displayinfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << "km/h" << endl;
    }
};

int main()
{
    //Creating object of class car.
    car mycar;
    //Accessing data members of class.
    mycar.brand = "TATA";
    mycar.speed = 110;

    //Accessing member function of class.
    mycar.displayinfo();

    return 0;
}