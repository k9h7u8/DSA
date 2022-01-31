#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int array[n];
    cout<<"Enter the Elements of array: "<<endl;
    for (int i = 0; i <n ; i++)
    {
        cin>>array[i];
    }

    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += array[j];
            cout<<currSum<<endl;
        }
    }
    return 0;
}