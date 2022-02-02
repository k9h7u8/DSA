#include <iostream>
using namespace std;

int main()
{
    string s = "ffghbejdksjieudh";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << "Caharacter that appear maximum time in a string is: " << ans << endl;
    cout << "No of times that character appear is: " << maxF << endl;
    return 0;
}