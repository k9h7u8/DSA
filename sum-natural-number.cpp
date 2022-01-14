#include <iostream>
using namespace std;
int sum(int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum  = sum + i;
    }
    return sum;
}
int main() 
{
    int num;
    cout<<"Enter the value of a number"<<endl;
    cin>>num;
    cout<<sum(num);
    return 0;
}