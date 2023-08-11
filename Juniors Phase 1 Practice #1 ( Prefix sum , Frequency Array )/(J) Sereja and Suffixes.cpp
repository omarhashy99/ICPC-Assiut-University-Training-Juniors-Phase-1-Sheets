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

    int len, q;
    cin >> len >> q;
    int arr[len];
    int maxV = -1;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxV)
        {
            maxV = arr[i];
        }
    }

    int isD[len + 1] = {0};
    bool visited[maxV + 1] = {0};

    for (int i = len; i > 0; i--)
    {
        if (!visited[arr[i - 1]])
        {
            isD[i] = 1;
            visited[arr[i - 1]] = 1;
        }
    }
    for (int i = 1; i <= len; i++)
    {
        isD[i] = isD[i] + isD[i - 1];
    }
    while (q--)
    {
        int x;
        cin >> x;
        cout << isD[len] - isD[x - 1] << "\n";
    }
    return 0;
}