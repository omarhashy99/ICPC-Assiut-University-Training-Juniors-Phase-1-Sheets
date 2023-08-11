#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void Code()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void solve()
{
    int n;
    cin >> n;
    str arr[n];
    map<int, char> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        int num;
        cin >> num;
        freq[num] = i;
    }

    for (int t = 0; t < n; t++)
    {
        str re = arr[t];
        int len = re.length();
        map<char, int> f2;

        for (int i = 0; i < len; i++)
        {
            if (re[i] > 'z' || re[i] < 'a')
            {
                f2[re[i]]++;
            }
        }
        for (int i = 0; i < len; i++)
        {
            if (re[i] > 'z' || re[i] < 'a')
            {
                re[i] = freq[f2[re[i]]];
            }
        }
        cout << re << endl;
    }
}

int main()
{
    Code();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}