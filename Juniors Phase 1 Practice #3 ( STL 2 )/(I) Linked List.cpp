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
    int n, q;
    cin >> n >> q;
    list<str> li;
    map<str, int> freq;
    for (int i = 0; i < n; i++)
    {
        str u;
        cin >> u;
        freq[u]++;
        li.push_back(u);
    }
    while (q--)
    {
        int in;
        cin >> in;
        if (in == 1)
        {
            str val;
            cin >> val;
            if (freq[val] > 0)
            {
                auto it = li.begin();
                while (*it != val)
                {
                    it++;
                }
                li.erase(it);
                freq[val]--;
            }
            else
            {
                cout << "Not found\n";
            }
        }
        else if (in == 2)
        {
            if (!li.empty())
                copy(li.begin(), li.end(), ostream_iterator<str>(cout, " "));
            else
                cout << "0";
            cout << "\n";
        }
        else if (in == 3)
        {
            if (!li.empty())
                copy(li.rbegin(), li.rend(), ostream_iterator<str>(cout, " "));
            else
                cout << "0";
            cout << "\n";
        }
    }
}

int main()
{
    Code();
    solve();
    return 0;
}