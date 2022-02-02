#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "name";

    // convert into upper case
    transform( s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    // convert into lower case
    transform( s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    return 0;
}