#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Code()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};

int main()
{
    Code();
    int len, q;
    cin >> len >> q;
    char str[len];
    int freq[26] = {0};

    for (int i = 0; i < len; i++)
    {
        cin >> str[i];
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (q == 0)
        {
            break;
        }
        if (q <= freq[i])
        {
            freq[i] -= q;
            q = 0;
        }
        else
        {
            q -= freq[i];
            freq[i] = 0;
        }
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (freq[str[i] - 'a'] == 0)
        {
            str[i] = -1;
        }
        else
        {
            freq[str[i] - 'a']--;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (str[i] != -1)
        {
            cout << str[i];
        }
    }

    return 0;
}