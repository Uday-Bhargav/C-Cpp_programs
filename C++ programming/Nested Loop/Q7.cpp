/*
 * * * *
 *     *
 * * * *
 *     *
 *     *
 */
#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0;
    while (i < 5)
    {
        while (j < 4)
        {
            if ((i != 0 && i != 2) && j > 0 && j < 3)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
    return 0;
}