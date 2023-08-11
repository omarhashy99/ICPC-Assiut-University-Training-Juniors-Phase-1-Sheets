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

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int len1 = str1.length();
    int len2 = str2.length();

    int freq['z' - 'A' + 1] = {0};
    for (int i = 0; i < len1; i++)
    {
        if (str1[i] == 32)
        {
            continue;
        }
        freq[str1[i] - 'A']++;
    }

    for (int i = 0; i < len2; i++)
    {
        if (str2[i] == 32)
        {
            continue;
        }
        if (freq[str2[i] - 'A'] == 0)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            freq[str2[i] - 'A']--;
        }
    }
    cout << "YES";

    return 0;
}