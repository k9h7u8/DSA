#include <iostream>
using namespace std;
int trailingZero(int n){
    int res = 0;
    for(int i =5; i<=n; i=i*5){
        res = res + n/i;
    }
    return res;
}
int main() 
{
    int num;
    cout<<"Enter the value of a number"<<endl;
    cin>>num;
    cout<<"Trailing zero in a factorial a number "<<num<<" is ";
    cout<<trailingZero(num)<<endl;
    return 0;
}