// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int n;
    bool prime = true;
    cin >> n;

    if (n == 0 || n == 1)
    {
        prime = false;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }
    return 0;
}