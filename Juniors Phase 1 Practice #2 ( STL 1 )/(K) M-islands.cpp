#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define int long long
#define endl "\n"
#define all(v) v.begin(), v.end()

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void Solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first;
        cin >> vec[i].second;
    }
    sort(all(vec));
    pair<int, int> tem = vec[0];
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        if (vec[i].first <= tem.second)
        {
            tem.second = max(tem.second, vec[i].second);
        }
        else
        {
            s.emplace(tem);
            tem = vec[i];
        }
    }
    s.emplace(tem);
    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        if (u > v)
            swap(u, v);
        auto it = s.lower_bound({u, v});
        if (it == s.end())
        {
            it--;
        }
        if (u >= it->first and v <= it->second)
        {
            cout << "YES" << endl;
            continue;
        }
        if (it == s.begin())
        {
            cout << "NO" << endl;
            continue;
        }
        it--;
        if (u >= it->first and v <= it->second)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}

int32_t main()
{
    FastIO();
    Solve();
}
