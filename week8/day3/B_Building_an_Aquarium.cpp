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
        int n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll low = 0, high = 2e9, ans = 0;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            ll sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += max(0ll, mid - a[i]);
            }
            if (sum <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}