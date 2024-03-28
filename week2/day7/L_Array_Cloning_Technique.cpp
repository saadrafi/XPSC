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
        int n, max = 0;
        cin >> n;
        long long a[n], ans = 0;
        map<long long, long long> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
            if (m[a[i]] > max)
            {
                max = m[a[i]];
            }
        }
        while (max < n)
        {
            int remaining = n - max;
            ans++;
            ans += min(remaining, max);
            max *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}