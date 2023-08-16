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
    stack<int> stack1;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (stack1.empty())
        {
            stack1.emplace(x);
            continue;
        }
        if (stack1.top() % 2 == x % 2)
        {
            stack1.pop();
            continue;
        }

        stack1.emplace(x);
    }
    if (stack1.size() <= 1)
    {
        cout << "YES";
        return;
    }

    cout << "NO";
}

int32_t main()
{
    FastIO();
    Solve();
}
