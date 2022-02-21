#include <iostream>
using namespace std;
void power(int n, int x){
    int res = 1;
    for (int i = 0; i < x; i++)
    {
        res = res * n;
    }
    cout<<res;
}

int main() 
{
    int n, p;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a power: ";
    cin >> p;
    power(n ,p);
    return 0;
}