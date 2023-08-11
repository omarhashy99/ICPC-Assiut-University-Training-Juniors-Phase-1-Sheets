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
    map<str, str> A;
    map<str, str> B;
    int n;
    cin >> n;
    while (n--)
    {
        str x, y;
        cin >> x >> y;
        if (B.count(x) > 0)
        {
            A[B[x]] = y;
            B[y] = B[x];
            B.erase(x);
        }
        else
        {
            A[x] = y;
            B[y] = x;
        }
    }
    cout << A.size() << endl;
    for (auto a : A)
    {
        cout << a.first << " " << a.second << endl;
    }
}

int main()
{
    Code();
    solve();
}