#include <iostream>
using namespace std;
int main() 
{
    int n;
    bool isPrime = true;
    cout<<"Enter a number: ";
    cin>>n;

    if (n==0 || n==1)
    {
        isPrime = false;
    }
    else 
    {
        // for (int i = 2; i < n; i++)
        for (int i = 2; i*i <= n; i++)
        {
            if (n%i == 0)
            {
                isPrime = false;
                break;
            }
        }    
    }
    
    if (isPrime)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
    
    return 0;
}