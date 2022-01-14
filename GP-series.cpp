#include <iostream>
using namespace std;
float gp_sum(float a, float r, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a;
        a = a * r;
    }
    return sum;
};


int main() 
{
    int n;
    cout << "Enter the no of terms" <<endl;
    cin>>n;
    float a, r;
    cout << "Enter the value of first term and the common ratio " <<endl;
    cin>>a>>r;
    cout<< "Sum of gP is: "<<gp_sum(a,r,n)<<endl;
    
    return 0;
}