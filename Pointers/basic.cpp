#include <iostream>
using namespace std;

int main() 
{
    int a = 10;
    int* ptr = &a;
    // adress of a variable
    cout<<&a<<endl;
    cout<<ptr<<endl;

    //value of variable
    cout<<*ptr<<endl;

    //changing the value of variable
    *ptr = 20;
    cout<<a;
    return 0;
}