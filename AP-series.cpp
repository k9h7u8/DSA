#include <iostream>
using namespace std;
float ap_sum(float a, float d, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a;
        a = a + d;
    }
    return sum;
};

int main() 
{
    int n;
    cout << "Enter the no of terms" <<endl;
    cin>>n;
    float a, d;
    cout << "Enter the value of first term and the common difference " <<endl;
    cin>>a>>d;
    cout<< "Sum of AP is: "<<ap_sum(a,d,n)<<endl;

    return 0;
}