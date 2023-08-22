#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define int long long
#define endl "\n"

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

template <typename T>
void vin(vector<T> &vec, int start = 0)
{
    int n = vec.size();
    for (int i = start; i < n; i++)
        cin >> vec[i];
}

void Solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> dpL(n);
    vector<int> dpR(n);
    stack<int> stR;
    stack<int> stL;
    vin(vec);
    for (int i = 0; i < n; i++)
    {
        while (!stL.empty() and vec[stL.top()] >= vec[i])
        {
            stL.pop();
        }
        if (stL.empty())
            dpL[i] = -1;
        else
            dpL[i] = stL.top();
        stL.emplace(i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!stR.empty() and vec[stR.top()] >= vec[i])
        {
            stR.pop();
        }
        if (stR.empty())
            dpR[i] = n - 1;
        else
            dpR[i] = stR.top() - 1;
        stR.emplace(i);
    }

    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        dpL[i] = i - dpL[i];
        dpR[i] = dpR[i] - i;
        answer = max(answer, (dpL[i] + dpR[i]) * vec[i]);
    }
    cout << answer << endl;
}

int32_t main()
{
    FastIO();
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
}
