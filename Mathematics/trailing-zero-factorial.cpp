#include <iostream>
using namespace std;
// not work when the datatype is overflow eg- for 20 factorial the datatype is overflow we get the value of factorial more than 19 number.
// time complexity is theta(n)
int trailingZero(int n){
    int fact =1;
    for (int i = 1; i <= n; i++){
        fact = fact*i;
    }
    int res = 0;
    while (fact %10 == 0)
    {
        res++;
        fact = fact/10;
    }
    return res;
}
int main() 
{
    int num;
    cout<<"Enter the value of a number: "<<endl;
    cin>>num;
    cout<<"Trailing zero in a factorial of a number "<<num<<" is ";
    cout<<trailingZero(num)<<endl;
    return 0;
}