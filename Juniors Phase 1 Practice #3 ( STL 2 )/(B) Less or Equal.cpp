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
    int n, q;
    cin >> n >> q;
    map<int, int> freq;
    for (int i = 0; i < n; i += 1)
    {
        int u;
        cin >> u;
        freq[u]++;
    }

    if (q == 0)
    {
        if (freq[1] == 0)
        {
            cout << 1;
        }
        else
        {
            cout << "-1";
        }
        return;
    }
    int cntr = 0;
    auto it = freq.begin();
    int maxV;
    while (cntr < q && it != freq.end())
    {
        cntr += it->second;
        maxV = it->first;
        it++;
    }
    if (cntr != q)
    {
        cout << "-1";
        return;
    }
    if (maxV > 1000000000)
    {
        cout << "-1";
        return;
    }
    cout << maxV;
}

int main()
{
    Code();
    solve();
    return 0;
}
