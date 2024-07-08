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
        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<ll>());

        vector<ll> prefix(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + v[i - 1];
        }

        if (d * v[0] < c)
        {
            cout << "Impossible" << endl;
        }
        else if (c <= prefix[min(n, d)])
        {
            cout << "Infinity" << endl;
        }
        else
        {
            ll res = 0, left = 1, right = d;
            while (left <= right)
            {
                ll mid = (left + right) / 2;
                ll t1 = min(mid, n);
                ll t2 = min(d % mid, n);
                ll temp = (d / mid) * prefix[t1] + prefix[t2];
                if (temp >= c)
                {
                    res = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
            cout << res - 1 << endl;
        }
    }
    return 0;
}