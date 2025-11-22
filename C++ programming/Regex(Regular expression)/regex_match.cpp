/*This function return true if the regular expression
is a match against the given string otherwise it returns false.
*/

#include <iostream>
#include <regex>
#include <string>

using namespace std;
int main()
{
    string a = "Hello, how are you?";

    regex b("(Hello)(.*)");
    // b is object of regex
    // Hello followed by any chaacter

    if (regex_match(a, b))
    {
        cout << "String 'a' matches regex 'b'\n";
    }
    
    if (regex_match(a.begin(), a.end(), b))
    {
        cout << "string 'a' matches regex 'b' in the range 0 to string end." << endl;
    }
    return 0;
}