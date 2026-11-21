/*Abstraction is the process of hiding internal and unnecessary details
and showing any important things to the user.
This promotes reducing complexity, and increases more clear understanding
about the code and output, as well as real life scenarios like how things
are working in backend.*/

#include <iostream>
using namespace std;

class car
{
private:
    void enginestart()
    {
        cout << "Button pressed...Engine starting." << endl;
    }

public:
    void accelerate()
    {
        enginestart(); // Private functions can be called inside class.
        cout << "Accelerator pressed...Car started moving." << endl;
    }
};
int main()
{
    car obj;
    obj.accelerate();

    return 0;
}