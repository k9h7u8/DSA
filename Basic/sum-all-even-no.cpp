// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }
    cout << "Sum of all even no upto " << n << " = " << sum << endl;

    return 0;
}