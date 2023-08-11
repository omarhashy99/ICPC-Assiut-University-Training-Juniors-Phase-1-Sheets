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
    deque<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll a = 0, b = 0, re = 0;
    while (!arr.empty())
    {
        if (a < b)
        {
            a += arr.front();
            arr.pop_front();
        }
        else
        {
            b += arr.back();
            arr.pop_back();
        }
        if (a == b)
        {
            re = a;
        }
    }
    cout << re;
}

int main()
{
    Code();
    solve();
}