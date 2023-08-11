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
    ll sum = 0;
    ll bigI = 0;
    ll bigI2 = 0;
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= arr[bigI])
        {
            bigI2 = bigI;
            bigI = i;
        }
        else if (bigI2 == bigI || arr[bigI2] <= arr[i])
        {
            bigI2 = i;
        }
        sum += arr[i];
    }
    sum -= arr[bigI];
    list<ll> re;
    for (ll i = 0; i < n; i++)
    {
        if (i == bigI)
        {
            continue;
        }
        if (sum - arr[i] == arr[bigI])
        {
            re.emplace_back(i + 1);
        }
    }
    sum -= arr[bigI2];
    if (sum == arr[bigI2])
    {
        re.emplace_back(bigI + 1);
    }
    if (re.empty())
    {
        cout << "0";
        return;
    }
    cout << re.size() << endl;
    copy(re.begin(), re.end(), ostream_iterator<ll>(cout, " "));
}

int main()
{
    Code();
    Solve();
    return 0;
}