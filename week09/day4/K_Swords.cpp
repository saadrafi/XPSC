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
    ll sum = 0, max_num = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        max_num = max(max_num, a[i]);
    }
    ll gcd = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += (max_num - a[i]);
        gcd = __gcd(gcd, max_num - a[i]);
    }
    cout << sum / gcd << " " << gcd << endl;

    return 0;
}