#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int val = i;
        for (int j = 0; j < i; j++)
        {
            // cout << val << " ";
            // val++;
            // another way
            cout << i + j << " ";
        }
        cout << endl;
    }
    return 0;
}