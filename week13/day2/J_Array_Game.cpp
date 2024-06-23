#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(begin(a), end(a));
        ll d = a[0];
        for (ll i = 0; i < n - 1; i++)
        {
            d = min(d, a[i + 1] - a[i]);
        }
        if (k >= 3)
        {
            cout << 0 << endl;
        }

        else if (k == 1)
        {
            cout << d << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
                for (ll j = 0; j < i; j++)
                {
                    ll v = a[i] - a[j];
                    ll p = lower_bound(begin(a), end(a), v) - begin(a);
                    if (p < n)
                        d = min(d, a[p] - v);
                    if (p > 0)
                        d = min(d, v - a[p - 1]);
                }
            cout << d << endl;
        }
    }
    return 0;
}