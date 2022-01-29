#include <iostream>
using namespace std;

int main()
{
    // check palindrome
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char arr[n + 1];
    cout << "Enter the word: ";
    cin >> arr;

    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = false;
            break;
        }
    }
    if (check == true)
    {
        cout << "Word is a palindrome";
    }
    else
    {
        cout << "Word is not a palindrome";
    }
    return 0;
}