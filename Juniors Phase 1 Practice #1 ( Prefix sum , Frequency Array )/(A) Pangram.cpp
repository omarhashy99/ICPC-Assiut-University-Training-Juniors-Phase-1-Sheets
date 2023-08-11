#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};

int main()
{
    Code();
    ll len;
    string str;
    cin >> len >> str;
    int Freq[26] = {0};

    for (int i = 0; i < len; i++)
    {
        int ch = (int)str[i];
        if (ch >= 97)
        {
            ch -= 32;
        }

        ch -= 65;

        Freq[ch]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (Freq[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}