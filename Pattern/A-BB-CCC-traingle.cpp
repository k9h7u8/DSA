#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // 1 way
            //  cout << ch << " ";

            // 2way
            char val = 'A' + i - 1;
            cout << val << " ";
        }
        ch++;
        cout << endl;
    }
    return 0;
}