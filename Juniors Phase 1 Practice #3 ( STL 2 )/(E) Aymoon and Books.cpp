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
    deque<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    priority_queue<int> table;
    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        if (ch == 'L' && !arr.empty())
        {
            table.push(arr.front());
            arr.pop_front();
        }
        else if (ch == 'R' && !arr.empty())
        {
            table.push(arr.back());
            arr.pop_back();
        }
        else if (ch == 'Q')
        {
            if (table.empty())
            {
                cout << "-1" << endl;
                continue;
            }
            cout << table.top() << endl;
            table.pop();
        }
    }
}

int main()
{
    Code();
    solve();
    return 0;
}