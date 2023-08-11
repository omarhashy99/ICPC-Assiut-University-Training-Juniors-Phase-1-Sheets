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
    stack<str> S;
    while (t--)
    {
        str st;
        cin >> st;
        if (st == "Header" || st == "Row" || st == "Cell" || st == "Table")
        {
            S.push(st);
        }
        else if (st == "EndHeader")
        {
            if (S.top() != "Header" || t != 0)
            {
                cout << "WA";
                return;
            }
            S.pop();
        }
        else if (st == "EndRow")
        {
            if (S.top() != "Row")
            {
                cout << "WA";
                return;
            }
            S.pop();
        }
        else if (st == "EndCell")
        {
            if (S.top() != "Cell")
            {
                cout << "WA";
                return;
            }
            S.pop();
        }
        else if (st == "EndTable")
        {
            if (S.top() != "Table")
            {
                cout << "WA";
                return;
            }
            S.pop();
        }
        else
        {
            cout << "WA";
            return;
        }
        if (S.size() == 1 && S.top() != "Header")
        {
            cout << "WA";
            return;
        }
    }
    if (S.size() > 0)
    {
        cout << "WA";
        return;
    }
    cout << "ACC";
}

int main()
{
    Code();
    solve();
    return 0;
}
