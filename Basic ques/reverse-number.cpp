#include <iostream>
using namespace std;

int main() 
{
    int num, val, rev =0;
    cout<<"Enter Any munber: ";
    cin>>num;

    while(num !=0){
        val = num%10;
        rev = (rev*10) + val;
        num = num/10;
    }
    cout<<"Reverse number is: "<<rev<<endl;

    return 0;
}