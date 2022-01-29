#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the value of rows and columns: " << endl;
    cin >> r >> c;
    int matrix[r][c];
    cout << "Enter the Elements of matrix: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix is: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSpiral Matrix : ";
    int row_start = 0, row_end = r - 1, column_start = 0, column_end = c - 1;
    while (row_start <= row_end && column_start <= column_end)
    {
        for (int i = column_start; i <= column_end; i++)
        {
            cout << matrix[row_start][i] << " ";
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++)
        {
            cout << matrix[i][column_end] << " ";
        }
        column_end--;
        for (int i = column_end; i >= column_start; i--)
        {
            cout << matrix[row_end][i] << " ";
        }
        row_end--;
        for (int i = row_end; i >= row_start; i--)
        {
            cout << matrix[i][column_start] << " ";
        }
        column_start++;
    }

    return 0;
}