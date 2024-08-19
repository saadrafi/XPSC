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
        ll n;
        cin >> n;
        ll l = 1, r = 1e10;
        ll ans = LLONG_MAX;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll x = mid * (mid - 1) / 2;
            if (x == n)
            {
                ans = min(ans, mid);
                break;
            }
            else if (x < n)
            {
                l = mid + 1;
                ans = min(ans, mid + n - x);
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}