#include <bits/stdc++.h>
using namespace std;
#define str string
#define ll long long

void Code()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};

ll binarySearch(int arr[], ll Left, ll Right, int search)
{
    ll mid = (Left + Right) / 2;
    if (mid == Left && arr[mid] != search)
    {
        return mid;
    }
    else if (search > arr[mid])
    {
        return binarySearch(arr, mid, Right, search);
    }
    else if (search < arr[mid])
    {
        return binarySearch(arr, Left, mid, search);
    }
    return mid;
}
void solve()
{
    int n;
    cin >> n;
    int arr[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n + 1);
    int q;
    cin >> q;
    map<int, int> freq;
    while (q--)
    {
        int x;
        cin >> x;
        if (freq[x] > 0)
        {
            cout << freq[x] << endl;
            continue;
        }
        int re = binarySearch(arr, 0, n + 1, x);
        if (re == n + 1)
        {
            re--;
        }
        while (arr[re] == arr[re + 1] && re <= n)
        {
            re++;
        }
        freq[x] = re;
        cout << re << endl;
    }
}

int main()
{
    Code();
    solve();
    return 0;
}