#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define str string

void Code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void Solve()
{
    ll n, q;
    cin >> n >> q;
    vector<int> vec(n, 0);

    while (q--)
    {
        int i;
        cin >> i;
        for (int u = i - 1; u < n; u += i)
        {
            vec[u] = 1;
        }
    }

    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " ")); // Print the vector
    cout << "\n";
}

int main()
{
    Code();
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
}