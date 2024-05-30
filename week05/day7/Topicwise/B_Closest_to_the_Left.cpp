#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        long long x;
        cin >> x;
        int l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (a[m] <= x)
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}