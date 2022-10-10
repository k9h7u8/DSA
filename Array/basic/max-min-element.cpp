#include <iostream>
#include <climits>
using namespace std;

void getArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int max(int arr[], int size)
{

    int maxNo = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxNo = max(maxNo, arr[i]);
    }
    return maxNo;
}

int min(int arr[], int size)
{
    int minNo = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        minNo = min(minNo, arr[i]);
    }
    return minNo;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];

    cout << "Enter the elements of array: ";
    getArray(arr, n);

    cout << "Maximum value is: " << max(arr, n) << endl;
    cout << "Manimum value is: " << min(arr, n) << endl;
    return 0;
}
