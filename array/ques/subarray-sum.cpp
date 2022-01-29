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

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = 1; j < n; j++)
        {
            curr += array[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}