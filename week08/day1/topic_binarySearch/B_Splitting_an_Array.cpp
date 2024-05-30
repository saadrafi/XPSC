#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, h = 1e18, ans = 0;
    while (l <= h)
    {
        ll m = (l + h) / 2;
        ll cnt = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > m)
            {
                cnt = k + 1;
                break;
            }
            if (sum + a[i] > m)
            {
                cnt++;
                sum = 0;
            }
            sum += a[i];
        }
        cnt++;
        if (cnt <= k)
        {
            ans = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans << endl;
    return 0;
}