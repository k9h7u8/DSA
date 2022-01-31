#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int array[n];
    cout << "Enter the Elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int ans = 2;
    int pd = array[1] - array[0];
    int curr = 2;
    for (int j = 2; j < n; j++)
    {
        if (pd == array[j] - array[j - 1])
        {
            curr++;
        }
        else
        {
            pd = array[j] - array[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);

    }
    cout << ans << endl;
    return 0;
}