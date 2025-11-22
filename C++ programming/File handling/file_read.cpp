/*This opt. is used to read data in a file.*/

#include <iostream>
#include <fstream>   // <<-- required for ifstream
#include <string>

using namespace std;

int main()
{
    ifstream file("file1.txt"); // check filename is correct

    if (!file.is_open()) {
        cout << "Could not open file 'file1.txt'\n";
        return 1;
    }

    string s;
    if (getline(file, s)) {
        cout << "Reading string: " << s << endl;
    } else {
        cout << "File is empty or read failed.\n";
    }

    file.close();
    return 0;
}