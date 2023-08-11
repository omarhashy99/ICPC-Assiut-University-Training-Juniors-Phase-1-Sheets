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
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<vector<int>> re;
    for (int i = 0; i < n; i++)
    {
        for (int u = i + 1; u < n; u++)
        {
            swap(arr[i], arr[u]);
            re.emplace(arr);
            swap(arr[i], arr[u]);
        }
    }
    cout << re.size() << endl;
}

int main()
{
    Code();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}