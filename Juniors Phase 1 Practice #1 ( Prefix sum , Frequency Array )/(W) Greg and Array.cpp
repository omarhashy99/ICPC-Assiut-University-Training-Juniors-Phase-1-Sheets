#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define int long long
#define endl "\n"

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void Solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> vecN(n + 2);
    vector<int> parN(n + 2);
    vector<pair<pair<int, int>, int>> vecQ(m + 2);
    vector<int> parQ(m + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> vecN[i];
    }
    for (int i = 1; i <= m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        vecQ[i] = {{l, r}, d};
    }
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        parQ[x]++;
        parQ[y + 1]--;
    }
    for (int i = 1; i <= m; i++)
    {
        parQ[i] += parQ[i - 1];
        vecQ[i].second *= parQ[i];
    }
    for (auto i : vecQ)
    {
        parN[i.first.first] += i.second;
        parN[i.first.second + 1] -= i.second;
    }
    for (int i = 1; i <= n; i++)
    {
        parN[i] += parN[i - 1];
        vecN[i] += parN[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << vecN[i] << " ";
    }
}

int32_t main()
{
    FastIO();
    Solve();
}
