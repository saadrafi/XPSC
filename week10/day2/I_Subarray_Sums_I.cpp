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
    ll l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum > x)
        {
            sum -= a[l];
            l++;
        }
        if (sum == x)
        {
            ans++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}