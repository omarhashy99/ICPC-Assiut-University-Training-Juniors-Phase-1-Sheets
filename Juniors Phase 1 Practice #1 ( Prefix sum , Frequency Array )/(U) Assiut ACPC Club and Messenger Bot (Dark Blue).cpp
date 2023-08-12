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
    str tem;
    cin >> tem;
    int n = tem.size();
    if (*max_element(all(tem)) == '?')
    {
        cout << 0 << endl;
        while (n--)
            cout << 'a';
        return;
    }
    deque<char> s(n);
    for (int i = 0; i < n; i++)
        s[i] = tem[i];
    map<char, int> cost;
    for (char i = 'a'; i <= 'z'; i++)
    {
        int x;
        cin >> x;
        cost[i] = x;
    }
    str re = "";
    while (!s.empty())
    {
        if (s.front() != '?')
        {
            re.push_back(s.front());
            s.pop_front();
            continue;
        }
        int cntr = 0;
        while (!s.empty() and s.front() == '?')
        {
            s.pop_front();
            cntr++;
        }
        char add = 'a';
        if (s.empty())
        {
            for (char i = 'a'; i <= 'z'; i++)
            {
                if (abs(cost[i] - cost[re.back()]) < abs(cost[add] - cost[re.back()]))
                    add = i;
            }
        }
        else if (re.empty())
        {
            for (char i = 'a'; i <= 'z'; i++)
            {
                if (abs(cost[i] - cost[s.front()]) < abs(cost[add] - cost[s.front()]))
                    add = i;
            }
        }
        else
        {
            for (char i = 'a'; i <= 'z'; i++)
            {
                if (abs(cost[i] - cost[s.front()]) + abs(cost[i] - cost[re.back()]) <
                    abs(cost[add] - cost[s.front()]) + abs(cost[add] - cost[re.back()]))
                    add = i;
            }
        }
        while (cntr--)
            re.push_back(add);
    }
    int reCost = 0;
    for (int i = 1; i < n; i++)
    {
        reCost += abs(cost[re[i]] - cost[re[i - 1]]);
    }
    cout << reCost << endl
         << re;
}

int32_t main()
{
    FastIO();
    Solve();
}
