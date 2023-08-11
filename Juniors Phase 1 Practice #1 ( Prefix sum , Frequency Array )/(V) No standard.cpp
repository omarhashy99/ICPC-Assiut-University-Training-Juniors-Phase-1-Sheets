#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define int long long
#define str string
#define endl "\n"

template <typename T>
void vIn(vector<T> &vec, int n, int start = 0)
{

    for (int i = start; i < n; i++)
        cin >> vec[i];
}

template <typename T>
void vOut(vector<T> &vec, int start = 0)
{
    copy(vec.begin() + start, vec.end(), ostream_iterator<T>(cout, " "));
    cout << endl;
}

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

const bool TEST_CASES = 0;
void Solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> vec(n + 1);
    vIn(vec, n + 1, 1);
    vector<int> pref1(n + 2);
    vector<int> pref2(n + 2);
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int temp = y - x + 1;
        pref1[x]++;
        pref1[y + 1]--;
        pref2[y + 1] -= temp;
    }
    for (int i = 1; i <= n + 1; i++)
    {
        pref1[i] += pref1[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        pref2[i] += pref2[i - 1];
        pref2[i] += pref1[i];
        vec[i] += pref2[i];
    }
    vOut(vec, 1);
}

void Code()
{
    int t = 1;
    if (TEST_CASES)
        cin >> t;
    while (t--)
        Solve();
}

int32_t main()
{
    FastIO();
    Code();
}
