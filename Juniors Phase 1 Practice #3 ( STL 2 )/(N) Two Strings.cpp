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
    str s1, s2;
    cin >> s1 >> s2;
    map<int, priority_queue<char>> freq1;
    map<int, priority_queue<char>> freq2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq1[x].push(s1[i]);
        freq2[x].push(s2[i]);
    }

    auto it1 = freq1.begin();
    auto it2 = freq2.begin();

    while (it1 != freq1.end())
    {
        if (it1->second.size() != it2->second.size())
        {
            cout << "NO" << endl;
            return;
        }
        while (!it2->second.empty() && it2->second.top() == it1->second.top())
        {
            it2->second.pop();
            it1->second.pop();
        }
        if (it1->second.size() != 0)
        {
            cout << "NO" << endl;
            return;
        }
        it1++;
        it2++;
    }
    cout << "YES" << endl;
}
int main()
{
    Code();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}