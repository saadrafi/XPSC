#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][n - 1];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> arr[i][j];
                if (j == 0)
                {
                    mp[arr[i][j]]++;
                }
            }
        }
        int max, min;
        for (auto i : mp)
        {
            if (i.second == n - 1)
            {
                max = i.first;
            }
            else
            {
                min = i.first;
            }
        }
        cout << max << " ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] == min)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
                break;
            }
        }
    }
    return 0;
}