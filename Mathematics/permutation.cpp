#include <iostream>
using namespace std;
int factorial(int n){
    int fact =1;
    for (int i = 1; i <= n; i++){
        fact = fact*i;
    }
    return fact;
}
int main() 
{
    int n, r;
    cout<<"Enter the value of a n: "<<endl;
    cin>>n;
     cout<<"Enter the value of a r: "<<endl;
    cin>>r;
    int per = n - r;
    cout<<factorial(n)/factorial(per)<<endl;
    return 0;
}