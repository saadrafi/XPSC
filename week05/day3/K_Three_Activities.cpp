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
        vector<pair<long long, int>> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            a[i] = {x, i};
        }
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            b[i] = {x, i};
        }

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            c[i] = {x, i};
        }
        sort(a.begin(), a.end(), greater<pair<long long, int>>());
        sort(b.begin(), b.end(), greater<pair<long long, int>>());
        sort(c.begin(), c.end(), greater<pair<long long, int>>());

        vector<int> a3, b3, c3;

        for (int i = 0; i < 3; i++)
        {
            a3.push_back(a[i].second);
            b3.push_back(b[i].second);
            c3.push_back(c[i].second);
        }

        long long ans = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (a3[i] != b3[j] && b3[j] != c3[k] && c3[k] != a3[i])
                    {
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}