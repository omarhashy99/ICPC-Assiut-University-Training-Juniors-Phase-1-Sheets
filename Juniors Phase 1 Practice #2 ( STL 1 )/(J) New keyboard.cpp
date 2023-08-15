#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define int long long
#define str string
#define endl "\n"

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void Solve()
{
    str s;
    while (cin >> s)
    {
        int n = s.size();
        stack<char> stack1;
        deque<str> de;
        str tem = "";
        de.push_back(tem);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '[')
            {
                if (stack1.empty())
                {
                    de.emplace_back(tem);
                }
                else
                {
                    de.emplace_front(tem);
                    stack1.pop();
                }
                stack1.push(s[i]);
                tem = "";
                continue;
            }
            if (s[i] == ']')
            {
                if (stack1.empty())
                    continue;
                stack1.pop();
                de.emplace_front(tem);
                tem = "";
                continue;
            }
            tem.push_back(s[i]);
        }
        if (stack1.empty())
            de.emplace_back(tem);
        else
            de.emplace_front(tem);

        for (auto i : de)
            cout << i;
        cout << endl;
    }
}

int32_t main()
{
    FastIO();
    Solve();
}
