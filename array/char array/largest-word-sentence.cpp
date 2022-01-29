#include <iostream>
using namespace std;

int main()
{
    // largest word in a sentence
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cout << "Enter the sentence: ";
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currlen = 0, maxlen = 0;
    int st = 0, maxst = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i + 1;
        }
        else
            currlen++;

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << "Max length of a word in a sentence is: " << maxlen << endl;
    for (int i = 0; i < maxlen; i++)
    {
        cout << arr[i + maxst];
    }
    cout << endl;
    return 0;
}