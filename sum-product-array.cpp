#include <iostream>
using namespace std;

void sum_pro(int array[], int length){
    int sum = 0;
    int product = 1;
    for(int i = 0; i<length; i++){
        sum += array[i];
    }
    cout<<"sum = "<<sum<<endl;
    for(int i = 0; i<length; i++){
        product *= array[i];
    }
    cout <<"product ="<<product<<endl;

};
int main() 
{
    int arr[] = {2,3,4};
    sum_pro(arr, 3);
    return 0;
}