#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    freopen("mex.in", "r", stdin);
};

int main()
{
    Code();
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n + 1];
        int visited[100010] = {0};

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            visited[arr[i]] = i;
        }
        while (q--)
        {
            int from, to;
            cin >> from >> to;
            int minI = INT_MAX;
            for (int i = from; i <= to; i++)
            {
                minI = min(minI, arr[i]);
            }
            for (int i = 1; i < 100010; i++)
            {
                if (visited[i] == 0 || visited[i] > to || visited[i] < from)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}