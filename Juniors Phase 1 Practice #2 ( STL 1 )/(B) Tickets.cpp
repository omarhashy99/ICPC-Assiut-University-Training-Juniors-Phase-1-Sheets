#include <bits/stdc++.h>
using namespace std;
#define str string
#define ll long long

void Code()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};

void solve()
{
    int t;
    cin >> t;
    queue<int> que;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            que.push(y);
        }
        else
        {
            if (que.front() == y)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            que.pop();
        }
    }
}

int main()
{
    Code();
    solve();
    return 0;
}
