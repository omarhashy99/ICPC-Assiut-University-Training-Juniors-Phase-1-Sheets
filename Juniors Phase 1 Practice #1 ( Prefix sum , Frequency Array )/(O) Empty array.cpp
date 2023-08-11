#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
};

int main()
{
    Code();

    int n;
    cin >> n;
    list<int> li(n);
    int freq[100001] = {0};
    int maxE = 0;

    for (auto it = li.begin(); it != li.end(); it++)
    {
        cin >> *it;
        freq[*it]++;
        if (freq[*it] > freq[maxE])
        {
            maxE = *it;
        }
    }
    li.sort();
    li.unique();

    while (freq[maxE] > 0)
    {
        for (auto item : li)
        {
            if (freq[item] > 0)
            {
                cout << item << " ";
                freq[item]--;
            }
        }
        cout << endl;
    }

    return 0;
}