#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> m >> n;

    vector<vector<ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        ll t, y, z;
        cin >> t >> z >> y;
        a[i] = {t, z, y};
    }

    vector<ll> b(n);
    ll low = 0, high = 1e9, ans = 0;

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll need = m;
        vector<ll> c(n);
        for (int i = 0; i < n; i++)
        {
            ll t = a[i][0], z = a[i][1], y = a[i][2];

            ll sets = mid / (t * z + y);
            ll rem = mid % (t * z + y);
            ll balloons = (sets * z) + min(z, (rem / t));
            balloons = min(balloons, need);
            need -= balloons;
            c[i] = balloons;
        }
        if (!need)
        {
            b = c;
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << endl;

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}