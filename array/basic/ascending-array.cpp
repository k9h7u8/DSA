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

    cout << "Elements of array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }

    bool ascen = true;
    
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            ascen = false;
        }
    }
    if (ascen == false)
    {
        cout << "Elements are not in ascending order";
    }
    else
    {
        cout << "Elements are in ascending order";
    }
    return 0;
}