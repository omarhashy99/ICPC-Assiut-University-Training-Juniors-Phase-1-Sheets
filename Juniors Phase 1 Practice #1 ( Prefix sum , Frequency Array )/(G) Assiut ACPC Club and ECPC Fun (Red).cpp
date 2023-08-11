#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Code()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};

int main()
{
    Code();

    int n;
    cin >> n;
    ll par[n + 2] = {0};
    ll arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i - 1];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        par[x]++;
        par[y + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {
        par[i] += par[i - 1];
    }
    int count = 0;
    list<int> re;
    for (int i = 1; i <= n; i++)
    {
        if (par[i] == 0)
        {
            count++;
            re.push_back(arr[i - 1]);
        }
    }
    cout << count << endl;
    for (auto item : re)
    {
        cout << item << " ";
    }

    return 0;
}