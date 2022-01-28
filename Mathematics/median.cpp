#include <iostream>
using namespace std;
void findMedian(int n, int arr[]){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] =arr[i];
                arr[i] = temp;
            }   
        }   
    }
    if( n % 2 != 0){
        cout<<"Median is:"<< arr[n/2];
    }
    else{
        cout<<"Median is:" <<arr[(n-1)/2]<<" , "<<arr[n/2];
    }
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

    findMedian(n, arr);
    return 0;

}