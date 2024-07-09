#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, n;
        cin >> h >> n;
        vector<ll> a(n), b(n);
        priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>, greater<pair<ll, pair<ll, ll>>>> pq;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (ll i = 0; i < n; i++)
        {
            pq.push({1, {a[i], b[i]}});
        }

        ll turn = 1;
        while (h > 0)
        {
            ll x = pq.top().second.first;
            ll y = pq.top().second.second;
            ll z = pq.top().first;
            pq.pop();
            h -= x;
            pq.push({z + y, {x, y}});
            turn = z;
        }
        cout << turn << endl;
    }
    return 0;
}