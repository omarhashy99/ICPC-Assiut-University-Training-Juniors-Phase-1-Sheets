#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void Code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    ll pref[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i - 1];
        pref[i] = arr[i - 1] + pref[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll u;
        cin >> u;
        cout << lower_bound(pref, pref + n + 1, u) - pref << endl;
    }
}

int main()
{
    Code();
    solve();
    return 0;
}