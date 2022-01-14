#include <iostream>
using namespace std;

int main() 
{
    int num, val;
    int count = 0;
    cout<<"Enter Any munber: "<<endl;
    cin>>num;

    while(num !=0){
        val = num%10;
        count++;
        num = num/10;
    }
    cout<<" No of digits in a number: "<<count<<endl;
    return 0;
}