#include <iostream>
using namespace std;

int main() 
{
    int r,c;
    cout<<"Enter the value of rows and columns: "<<endl;
    cin>>r>>c;
    int matrix[r][c];
    cout<<"Enter the Elements of matrix: "<<endl;
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix is: "<<endl;
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int key ;
    cout<<"Enter the value of element for search: ";
    cin>>key;

    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(key == matrix[i][j])
        {
            cout<<"Element found at location: "<<i<<" "<<j<<endl;
        }
        }
        
    }
    return 0;
}