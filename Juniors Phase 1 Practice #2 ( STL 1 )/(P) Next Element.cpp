#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl "\n"

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}
void Solve()
{
    int n;
    cin >> n;
    stack<pair<int, int>> st;
    map<int, int> re;
    for (int i = 1; i <= n; i++)
    {
        int u;
        cin >> u;
        while (!st.empty() && u > st.top().second)
        {
            re[st.top().first] = i;
            st.pop();
        }
        st.emplace(i, u);
    }
    while (!st.empty())
    {
        re[st.top().first] = -1;
        st.pop();
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i;
        cin >> i;
        cout << re[i] << endl;
    }
}

int32_t main()
{
    FastIO();
    Solve();
}
