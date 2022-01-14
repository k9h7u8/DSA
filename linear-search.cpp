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

    cout<<"Elements of array are: "<<endl;
    for (int i = 0; i <n ; i++)
    {
        cout<<array[i]<<endl;
    }

    int key;
    cout<<"Enter the value of element for search: ";
    cin>>key;
    
    for (int i = 0; i < n; i++)
    {
        if(key == array[i])
        {
            cout<<"Element found at index: "<<i<<endl;
        }
    }
    return 0;
}