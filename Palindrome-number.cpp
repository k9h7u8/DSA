//reverse number & check is a number is a palindrome 
#include <iostream>
using namespace std;

int main() 
{
    int n, num, val, rev =0;
    cout<<"Enter Any munber: ";
    cin>>num;

    n = num;
    while(num !=0){
        val = num%10;
        rev = (rev*10) + val;
        num = num/10;
    }
    cout<<"Reverse number is: "<<rev<<endl;
     if (n == rev){
         cout<<"Number is a Palindrome"<<endl;
     }
     else{
         cout<<"Number is not a Palindrome"<<endl;
     }

    return 0;
}