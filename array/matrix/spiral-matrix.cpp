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

    cout << "\nSpiral Matrix : ";
    int k = 0, l = 0;
    while (k < r && l < c)
    {
        for (int i = l; i < c; i++)
        {
            cout << matrix[k][i] <<" ";
        }
        k++;
        for (int i = k; i < r; i++)
        {
            cout << matrix[i][c - 1] <<" ";
        }
        c--;
        if (k < r)
        {
            for (int i = c - 1; i >= 0; --i)
            {
                cout << matrix[r - 1][i] <<" ";
            }
            r--;
        }
        if (l < c)
        {
            for (int i = r - 1; i >= k; i--)
            {
                cout << matrix[i][l] <<" ";
            }
            l++;
        }
    }
    cout << endl;
    return 0;
}