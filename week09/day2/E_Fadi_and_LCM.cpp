#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;

    ll a;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll x = i;
            ll y = n / i;
            if (lcm(x, y) == n)
            {
                a = x;
            }
        }
    }
    cout << a << " " << n / a << endl;

    return 0;
}