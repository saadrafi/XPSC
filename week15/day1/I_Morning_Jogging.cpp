#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            sort(a[i].begin(), a[i].end());
        }

        vector<int> ans[n];

        for (int j = 0; j < m; j++)
        {
            int min = INT_MAX;
            int index = -1;
            for (int i = 0; i < n; i++)
            {
                if (a[i][0] < min)
                {
                    min = a[i][0];
                    index = i;
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (i == index)
                {
                    ans[i].push_back(a[i][0]);
                    a[i].erase(a[i].begin());
                }
                else
                {
                    ans[i].push_back(a[i][a[i].size() - 1]);
                    a[i].erase(a[i].end() - 1);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}