#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define int long long
#define str string

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void Solve()
{
    int n;
    cin >> n;
    stack<int> st;
    int re = 0;
    for (int i = 0; i < n; i++)
    {
        str s;
        cin >> s;
        if (s == "for")
        {
            int repeat;
            cin >> repeat;
            if (st.empty())
                st.push(min((int)pow(2, 32), repeat));
            else
                st.push(min((int)pow(2, 32), repeat * st.top()));
            continue;
        }
        if (s == "end")
        {
            st.pop();
            continue;
        }
        if (st.empty())
        {
            re++;
            continue;
        }
        re += st.top();
    }
    if (re >= pow(2, 32))
        cout << "OVERFLOW!!!";
    else
        cout << re;
}

int32_t main()
{
    FastIO();
    Solve();
}
