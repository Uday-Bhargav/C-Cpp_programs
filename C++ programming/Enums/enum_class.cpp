/*C++11 introduced enum class, which provides better type safety.
It helps in resolving name conflicts by providing scope
to the constant names.*/

#include <iostream>
using namespace std;

//defining the enum class.
enum days
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    //initialization.
    days d = days::Friday;//declaring scope for resolving name conflicts.

    //printing the enum.
    cout << static_cast<int>(d);
    return 0;
}