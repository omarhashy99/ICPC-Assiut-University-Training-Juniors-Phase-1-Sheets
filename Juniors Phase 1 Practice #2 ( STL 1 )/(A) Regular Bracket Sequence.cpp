#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void Code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};

void solve()
{
    int counter = 0;
    int re = 0;
    str st;
    cin >> st;
    for (auto i : st)
    {
        if (i == '(')
        {
            re++;
        }
        else
        {
            re--;
        }
        if (re == -1)
        {
            re = 0;
            counter++;
        }
    }
    if (re != 0)
    {
        counter += re;
    }
    counter = st.size() - counter;
    cout << counter;
}

int main()
{
    Code();
    solve();
    return 0;
}
