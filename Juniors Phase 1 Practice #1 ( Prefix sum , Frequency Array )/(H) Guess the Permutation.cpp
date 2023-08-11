#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Code()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

#define str string

void Solve()
{
    int n;
    cin >> n;
    vector<int> re(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int u = 0; u < n; u++)
        {
            int num;
            cin >> num;
            re[u] = max(re[u], num);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int u = 0; u < n; u++)
        {
            if (re[i] == re[u] && i != u)
            {
                re[i]++;
                copy(re.begin(), re.end(), ostream_iterator<int>(cout, " "));
                return;
            }
        }
    }
}

int main()
{
    Code();
    Solve();
    return 0;
}
