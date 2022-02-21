#include <iostream>
using namespace std;
//Simplest Solution
bool prime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    else if (n == 2 || n == 3)
    {
        return true;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 5; i * i <= n; i = i + 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }
};

void primeFactors(int n){
    
    for (int i = 2; i < n; i++)
    {
        if(prime(i)){
            int x = i;
            while (n % x == 0)
            {
                cout<<i<<" ";
                x = x * i;
            } 
        }
    }   
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    primeFactors(n);
    return 0;
}
