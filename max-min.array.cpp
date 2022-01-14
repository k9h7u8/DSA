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

    int max = array[0];
    int min = array[0];

    for (int i = 0; i <n ; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        } 
    }

    cout<<"Maximum number in a array: "<<max<<endl;
    cout<<"Minimum number in a array: "<<min<<endl;
    return 0;
}