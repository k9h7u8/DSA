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
    

    cout<<"Transpose of a matrix is: ";

   for (int j = 0; j < c; j++)
    {
        for(int i = 0; i < r; i++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}