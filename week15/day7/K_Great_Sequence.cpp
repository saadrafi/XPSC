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
        ll n, x;
        cin >> n >> x;
        multiset<ll> s;

        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            s.insert(a);
        }
        ll ans = 0;
        for (auto i : s)
        {
            ll target = i * x;
            if (s.find(target) != s.end())
            {
                s.erase(s.find(target));
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}