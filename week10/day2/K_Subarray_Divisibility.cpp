#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    map<ll, ll> mp;
    ll sum = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        sum = (sum % n + n) % n;
        ans += mp[sum];
        mp[sum]++;
    }
    cout << ans << endl;
    return 0;
}