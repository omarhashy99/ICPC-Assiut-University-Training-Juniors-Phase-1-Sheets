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
    str st;
    cin >> st;
    map<str, char> key;
    for (int i = 0; i < 10; i++)
    {
        str x;
        cin >> x;
        key[x] = i + '0';
    }
    str re = "";
    for (int i = 0; i <= 70; i += 10)
    {
        re.push_back(key[st.substr(i, 10)]);
    }
    cout << re << endl;
}

int main()
{
    Code();
    solve();
}