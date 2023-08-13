#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define int long long
#define str string
#define endl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void Solve()
{
    int w, h, n;
    cin >> w >> h >> n;
    vector<vector<int>> grid(w + 2, vector<int>(h + 2));
    while (n--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 > x2)
            swap(x1, x2);
        if (y1 > y2)
            swap(y1, y2);
        grid[x1][y1]++;
        grid[x1][y2 + 1]--;
        grid[x2 + 1][y1]--;
        grid[x2 + 1][y2 + 1]++;
    }

    for (int i = 1; i <= w + 1; i++)
    {
        for (int u = 1; u <= h + 1; u++)
        {
            grid[i][u] += grid[i - 1][u];
            grid[i][u] += grid[i][u - 1];
            grid[i][u] -= grid[i - 1][u - 1];
        }
    }
    int cntr = 0;
    for (int i = 1; i <= w; i++)
        for (int u = 1; u <= h; u++)
            if (!grid[i][u])
                cntr++;
    cout << cntr << endl;
}

int32_t main()
{
    FastIO();
    int t;
    cin >> t;
    while (t--)
        Solve();
}
