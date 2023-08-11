#include <bits/stdc++.h>
using namespace std;
#define str string
#define ll long long

void Code()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};

void solve()
{
    int n;
    str st;
    cin >> n >> st;
    map<str, int> freq;
    for (int i = 0; i < n - 1; i += 2)
    {
        str st2 = "";
        st2.push_back(st[i]);
        st2.push_back(st[i + 1]);
        freq[st2]++;
    }
    for (int i = 1; i < n - 1; i += 2)
    {
        str st2 = "";
        st2.push_back(st[i]);
        st2.push_back(st[i + 1]);
        freq[st2]++;
    }
    string re;
    int maxV = INT_MIN;
    for (auto i : freq)
    {
        if (i.second > maxV)
        {
            maxV = i.second;
            re = i.first;
        }
    }
    cout << re;
}

int main()
{
    Code();
    solve();
    return 0;
}