#include <iostream>
using namespace std;

int main() 
{
    string s = "567896789";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s;
    return 0;
}