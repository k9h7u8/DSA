#include <iostream>
using namespace std;
// efficient solution
void allDivisor(int n){
    for (int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            cout<<i<<" ";
            if (i != n/i)
            {
                cout<<(n/i)<<" ";
            }
        }
    } 
}
int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    allDivisor(n);
    return 0;
}