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

    ll l = 0, h = 1e9, ans = 0;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        ll cows = 1;
        ll prev = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] - prev >= mid)
            {
                cows++;
                prev = a[i];
            }
        }
        if (cows >= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}