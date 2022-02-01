#include <iostream>
using namespace std;

int main()
{
    //sum of all subarray and maximun sum in all the subarray
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int array[n];
    cout << "Enter the Elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int maxSum = INT_MIN;
    cout << "Subarrays of the array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += array[k];
            }
            cout<<sum<<endl;
            maxSum = max(maxSum, sum);
        }
    }
    cout<<"Maximum sum in the subarray is:";
    cout << maxSum << endl;
    return 0;
}