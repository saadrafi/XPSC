#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    if (v.size() < k)
    {
        cout << -1;
    }
    else
    {
        cout << v[k - 1];
    }
    return 0;
}