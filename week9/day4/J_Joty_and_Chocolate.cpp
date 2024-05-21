#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b) * b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll ans = ((n / a) * p) + ((n / b) * q) - ((n / lcm(a, b)) * min(p, q));
    cout << ans << endl;
    return 0;
}