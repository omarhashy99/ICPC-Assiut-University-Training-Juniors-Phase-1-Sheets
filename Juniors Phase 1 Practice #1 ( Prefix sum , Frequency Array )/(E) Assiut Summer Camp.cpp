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

    int t;
    cin >> t;
    while (t--)
    {
        string strs[4] = {"Hussien", "Atef", "Karemo", "Ezzat"};
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < 4 - 1; i++)
        {
            for (int j = 0; j < 4 - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swap(strs[j], strs[j + 1]);
                }
            }
        }
        cout << strs[3] << " " << strs[2] << endl;
    }

    return 0;
}