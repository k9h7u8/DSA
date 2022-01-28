#include <iostream>
using namespace std;
void findMean(int a[], int n){
     int sum =0, mean;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    mean = sum/n;
    cout<<"Mean is: "<<mean;
}

int main() 
{
    int n;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the terms: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Terms are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

    findMean(arr, n);


    return 0;

}