#include <iostream>
using namespace std;

void getArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

bool linearseach(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];

    cout << "Enter the elements of array: ";
    getArray(arr, n);

    int key;
    cout << "enter key: ";
    cin >> key;
    bool founded = linearseach(arr, n, key);
    if (founded)
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not absent" << endl;
    }

    return 0;
}
