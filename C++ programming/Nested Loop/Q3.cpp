/*print this pattern as given below:-
1  2  3  4
8  7  6  5
9  10 11 12
13 14 15 16
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<i + 1 + 1;
        }
        cout<<endl;
    }
}