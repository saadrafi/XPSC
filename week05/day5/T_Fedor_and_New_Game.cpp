#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> a(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        int x;
        cin >> x;
        vector<int> v(n);
        for (int j = 0; j < n; j++)
        {
            if ((x >> j) & 1)
            {
                v[j] = 1;
            }
            else
            {
                v[j] = 0;
            }
        }
        a[i] = v;
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != a[m][j])
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}