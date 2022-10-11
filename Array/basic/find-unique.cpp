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

int unique(int arr[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the odd number of elements: ";
    cin >> n;
    int arr[100];

    cout << "Enter the elements of array: ";
    getArray(arr, n);

    cout << "Unique element in an array is: " << unique(arr, n) << endl;

    return 0;
}
