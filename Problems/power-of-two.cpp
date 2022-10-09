#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the integer: ";
    cin >> n;

    int result = isPowerOfTwo(n);
    cout << result << endl;
    if (result)
    {
        cout << n << " is the Power of two ";
    }
    else
    {
        cout << n << " is not the Power of two ";
    }
    return 0;
}