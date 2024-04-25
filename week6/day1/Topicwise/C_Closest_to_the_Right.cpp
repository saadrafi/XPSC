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
        int l = 0, r = n - 1, ans = 0;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (a[m] >= x)
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        if (ans == 0 && a[ans] < x)
        {
            cout << n + 1 << endl;
        }
        else
        {
            cout << ans + 1 << endl;
        }
    }

    return 0;
}