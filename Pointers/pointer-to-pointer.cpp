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

    //pointer to pointer
    int** ptr2 = &ptr;
    cout<<*ptr2<<endl;
    cout<<**ptr2;

    return 0;
}