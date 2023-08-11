#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define str string

static void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int pointer = 0;
    stack<int> st;
    for (int i = 1; i <= n; i++)
    {
        st.emplace(i);
        while (!st.empty() && st.top() == vec[pointer])
        {
            st.pop();
            pointer++;
        }
    }
    if (st.empty())
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    FastIO();
    solve();
    return 0;
}