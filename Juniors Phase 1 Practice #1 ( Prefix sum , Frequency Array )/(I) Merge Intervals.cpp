#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void Code()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vec[i] = {x, y};
    }
    sort(vec.begin(), vec.end(), [](const pair<int, int> &l, const pair<int, int> &r)
         {
            if (l.first == r.first) {
                return l.second > r.second;
            }
            return l.first < r.first; });
    auto it = vec.begin();
    while (it != vec.end())
    {
        pair<int, int> tem = *it;
        it++;
        while (it != vec.end() && it->first <= tem.second)
        {
            tem.second = max(it->second,tem.second);
            it++;
        }

        cout << tem.first << " " << tem.second << endl;
    }
}

int main()
{
    Code();

    solve();

    return 0;
}