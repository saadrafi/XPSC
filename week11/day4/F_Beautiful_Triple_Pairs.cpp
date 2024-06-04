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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<pair<pair<ll, ll>, ll>, ll> three;
        map<pair<pair<ll, ll>, ll>, ll> two;
        ll ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            ll temp = three[{{v[i], v[i + 1]}, v[i + 2]}];
            ans += two[{{0, v[i + 1]}, v[i + 2]}] - temp;
            ans += two[{{v[i], v[i + 1]}, 0}] - temp;
            ans += two[{{v[i], 0}, v[i + 2]}] - temp;
            three[{{v[i], v[i + 1]}, v[i + 2]}]++;
            two[{{0, v[i + 1]}, v[i + 2]}]++;
            two[{{v[i], v[i + 1]}, 0}]++;
            two[{{v[i], 0}, v[i + 2]}]++;
        }
        cout << ans << endl;
    }
    return 0;
}