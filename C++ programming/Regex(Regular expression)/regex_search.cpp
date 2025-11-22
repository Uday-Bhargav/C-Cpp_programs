/*This function is used to search for a pattern
matching the regular expression */

#include<iostream>
#include<regex>
#include<string>

using namespace std;
int main(){
    string s = "Hey what are you doing blablabla";
    //Declaration of string with same pattern.

    regex r("bla[a-zA-Z]+");
    //r is object of regex to search a pattern in string.

    smatch m;
    //This will match the similar patterns in a string.

    regex_search(s,m,r);

    //for each loop will iterate through all the matching values and print.
    for(auto x  : m)
    cout<<x<<" ";

    return 0;
}

