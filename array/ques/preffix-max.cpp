#include <iostream>
#include <climits>
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

    int mx = -199999999;
    for (int i = 0; i <n ; i++)
    {
        mx = max(mx, array[i]);
        cout<<mx<<endl;
    }
    return 0;
}