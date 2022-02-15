#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a, int b)
{
    while (while a != b)
    {
        if (a > b)
        {
            a = a - b
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter two values: ";
    cin >> a >> b;
    cout << gcd(a, b);

    return 0;
}