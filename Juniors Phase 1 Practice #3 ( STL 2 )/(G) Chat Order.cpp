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
    int n;
    cin >> n;
    stack<str> chat;
    while (n--)
    {
        str st;
        cin >> st;
        chat.push(st);
    }
    map<str, bool> visited;
    while (!chat.empty())
    {
        str topCh = chat.top();
        chat.pop();
        if (!visited[topCh])
        {
            visited[topCh] = 1;
            cout << topCh << endl;
        }
    }
}

int main()
{
    Code();
    solve();
    return 0;
}
