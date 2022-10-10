#include <iostream>
using namespace std;

void getArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void sum_pro(int array[], int length)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    cout << "sum = " << sum << endl;
    for (int i = 0; i < length; i++)
    {
        product *= array[i];
    }
    cout << "product =" << product << endl;
};

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements of array: ";
    getArray(arr, n);

    sum_pro(arr, n);
    return 0;
}