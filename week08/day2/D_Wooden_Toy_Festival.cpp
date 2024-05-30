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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll l = 0, h = 1e9, ans = 0;
        while (l <= h)
        {
            ll m = (l + h) / 2;
            int cnt = 0;
            int i = 0, j = 0;
            while (i < n && j < n)
            {
                if (a[j] - a[i] <= 2*m)
                {
                    j++;
                }
                else
                {
                    i = j;
                    cnt++;
                }
            }
            cnt++;
            if (cnt <= 3)
            {
                ans = m;
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}