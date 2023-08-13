#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define int long long
#define str string
#define endl "\n"

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

void Solve()
{
    str a, b, c;
    map<char, int> freqA, freqB, freqC;
    cin >> a >> b >> c;
    for (int i = 0; i < a.size(); i++)
        freqA[a[i]]++;
    for (int i = 0; i < b.size(); i++)
        freqB[b[i]]++;
    for (int i = 0; i < c.size(); i++)
        freqC[c[i]]++;

    int maxBinA = LONG_LONG_MAX;

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (freqB[i])
            maxBinA = min(maxBinA, freqA[i] / freqB[i]);
    }

    int maxB = 0, maxC = 0;

    for (int u = 0; u <= maxBinA; u++)
    {
        int maxCinA = LONG_LONG_MAX;

        for (char i = 'a'; i <= 'z'; i++)
        {
            if (freqC[i])
                maxCinA = min(maxCinA, max((ll)0, (freqA[i] - freqB[i] * u)) / freqC[i]);
        }
        if (u + maxCinA > maxB + maxC and maxCinA != LONG_LONG_MAX)
        {
            maxB = u;
            maxC = maxCinA;
        }
    }

    for (int i = 0; i < maxB; i++)
        cout << b;
    for (int i = 0; i < maxC; i++)
        cout << c;
    for (char i = 'a'; i <= 'z'; i++)
    {
        freqA[i] -= maxB * freqB[i];
        freqA[i] -= maxC * freqC[i];
        while (freqA[i]--)
            cout << i;
    }
}

int32_t main()
{
    FastIO();
    Solve();
}
