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
    vector<str> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end(), [](const str &l, const str &r)
         { return l.size() > r.size(); });

    for (int i = 1; i < n; i++)
    {
        if (vec[i - 1].find(vec[i]) == std::string::npos)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES\n";
    copy(vec.rbegin(), vec.rend(), ostream_iterator<str>(cout, "\n"));
}

int main()
{
    Code();

    solve();

    return 0;
}