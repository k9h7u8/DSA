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

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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

    reverse(arr, n);

    cout << "Elements after reversing the array: ";
    printtArray(arr, n);
    return 0;
}
