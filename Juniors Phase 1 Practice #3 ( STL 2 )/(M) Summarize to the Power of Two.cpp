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
    ll arr[n];
    map<ll, ll> visited;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        visited[arr[i]]++;
    }
    int cntr = 0;
    for (int i = 0; i < n; i++)
    {
        for (int u = 1; u <= 32; u++)
        {
            ll m = pow(2, u) - arr[i];
            if (m == arr[i] && visited[m] > 1)
            {

                cntr++;
                break;
            }
            else if (visited[m] > 0 && m != arr[i])
            {

                cntr++;
                break;
            }
        }
    }
    cout << n - cntr;
}
int main()
{
    Code();
    solve();
}