#include <iostream>
#include <math.h>
using namespace std;
int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            break;
        }
        res++;
    }
    return res;
}
int main()
{
    int a, b;
    cout << "Enter two values: ";
    cin >> a >> b;
    cout << lcm(a, b);

    return 0;
}