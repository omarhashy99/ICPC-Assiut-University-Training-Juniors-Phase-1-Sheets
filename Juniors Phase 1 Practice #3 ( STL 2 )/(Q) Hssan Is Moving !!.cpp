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
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> items(n1);
    vector<int> cars(n2);

    for (int i = 0; i < n1; i++)
    {
        cin >> items[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> cars[i];
    }
    sort(items.begin(), items.end());
    sort(cars.begin(), cars.end(), greater<>());

    int re = 0;

    while (!items.empty())
    {
        re++;
        for (int i = 0; i < n2; i++)
        {
            auto it = upper_bound(items.begin(), items.end(), cars[i]);
            if (it == items.begin())
            {
                break;
            }
            items.erase(it - 1);
        }
        if (!items.empty())
        {
            re++;
        }
    }
    cout << re;
}
int main()
{
    Code();
    solve();
}