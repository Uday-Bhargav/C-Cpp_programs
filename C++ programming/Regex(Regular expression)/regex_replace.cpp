/* This function is used to replace the pattern matching
to the regular expression with a string.*/

#include <iostream>
#include <regex>
#include <string>
#include <iterator>

using namespace std;
int main()
{
    string s = "Hey what are you doing blablabla\n";

    regex r("bla[a-zA-Z]+");

    cout << regex_replace(s, r, "bro");

    string result;

    regex_replace(back_inserter(result), s.begin(), s.end(), r, "bro");

    cout << result << endl;
}