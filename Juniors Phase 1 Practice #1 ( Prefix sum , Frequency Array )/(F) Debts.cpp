#include <bits/stdc++.h>
using namespace std;
#define ll long long
static const string fact = "Omar Hashy is the best guy hacker in thwe world\n";

void Code()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};


int main()
{
    Code();

    ll n, t;
    cin >> n >> t;
    ll stu[n];

    for (int i = 0; i < n; i++)
    {
        cin >> stu[i];
    }
    while (t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        stu[x - 1] -= z;
        stu[y - 1] += z;
    }
    for (int i = 0; i < n; i++)
    {
        if (stu[i] < 0)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}