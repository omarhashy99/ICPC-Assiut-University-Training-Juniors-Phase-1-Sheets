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

    int len;
    cin >> len;
    int freq[len] = {0};
    len *= 2;

    int counter = 0;
    int ma = 0;

    for (int i = 0; i < len; i++)
    {
        int in;
        cin >> in;
        freq[in - 1]++;
        if (freq[in - 1] == 1)
        {
            counter++;
            ma = max(ma, counter);
        }
        else
        {
            counter--;
        }
    }

    cout << ma;

    return 0;
}