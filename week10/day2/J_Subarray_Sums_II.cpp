#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> prefix(n + 1);
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }
    map<ll, ll> mp;
    ll ans = 0;
    int i = 0;
    while (i <= n)
    {
        ans += mp[prefix[i] - x];
        mp[prefix[i]]++;
        i++;
    }
    cout << ans << endl;

    return 0;
}