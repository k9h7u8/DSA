#include <iostream>
using namespace std;
void prime(int n)
{
    bool isPrime = true;
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else if (n == 2 || n == 3)
    {
        isPrime = true;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 5; i * i <= n; i = i + 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is not prime";
    }
};

int main()
{
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;
    prime(n);
    return 0;
}