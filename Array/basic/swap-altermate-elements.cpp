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

void printtArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseAlternateElement(int arr[], int size)
{

    int start = 0;
    int end = 1;
    for (int i = 1; i <= size / 2; i++)
    {
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end + 2;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];

    cout << "Enter the elements of array: ";
    getArray(arr, n);

    reverseAlternateElement(arr, n);

    cout << "Array after reversing alternate element: ";
    printtArray(arr, n);
    return 0;
}
