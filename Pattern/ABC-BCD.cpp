#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // 1 way
            //  char val = i + j - 1 + 64;
            //  cout << val << " ";

            // 2 way
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}