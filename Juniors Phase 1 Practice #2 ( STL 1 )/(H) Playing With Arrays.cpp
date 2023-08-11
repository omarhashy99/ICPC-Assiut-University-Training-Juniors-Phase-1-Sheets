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
    deque<int> A;
    A.push_back(n);
    n--;
    while (n > 0)
    {
        A.push_front(A.back());
        A.pop_back();
        A.push_front(n);

        n--;
    }
    n = A.size();
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
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
