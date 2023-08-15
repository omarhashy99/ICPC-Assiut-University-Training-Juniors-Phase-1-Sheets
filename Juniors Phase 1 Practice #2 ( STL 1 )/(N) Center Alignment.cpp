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
    string s;
    list<string> li;
    while (getline(cin, s))
    {
        li.emplace_back(s);
    }
    int ms = 0;
    for (auto i : li)
    {
        ms = max(ms, (int)i.size());
    }
    for (int i = 0; i < ms + 2; i++)
        cout << "*";
    cout << endl;
    bool key = 1;
    for (auto i : li)
    {
        cout << "*";
        int n = i.size();
        int end;
        if ((ll)ceil((float)(ms - n) / (float)2) != (ms - n) / 2)
        {
            if (key)
            {
                end = (ms - n) / 2;
            }
            else
            {
                end = (ll)ceil((float)(ms - n) / (float)2);
            }
        }
        else
        {
            end = (ms - n) / 2;
        }
        for (int i = 0; i < end; i++)
        {
            cout << " ";
        }
        cout << i;
        if ((ll)ceil((float)(ms - n) / (float)2) != (ms - n) / 2)
        {
            if (key)
            {
                end = (ll)ceil((float)(ms - n) / (float)2);
            }
            else
            {
                end = (ms - n) / 2;
            }
            key = !key;
        }
        else
        {
            end = (ms - n) / 2;
        }
        for (int i = 0; i < end; i++)
            cout << " ";
        cout << "*\n";
    }

    for (int i = 0; i < ms + 2; i++)
        cout << "*";
    cout << endl;
}

int32_t main()
{
    FastIO();
    Solve();
}
