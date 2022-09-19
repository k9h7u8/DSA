#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j
                 << " ";
        }

        int star = i - 1;
        while (star)
        {
            cout << "*"
                 << " ";
            star--;
        }

        int start = i - 1;
        while (start)
        {
            cout << "*"
                 << " ";
            start--;
        }

        int num = n - i + 1;
        while (num)
        {
            cout << num
                 << " ";
            num--;
        }
        cout << endl;
    }
    return 0;
}