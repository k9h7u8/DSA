#include <iostream>
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

    cout << "Subarrays of the array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << array[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}