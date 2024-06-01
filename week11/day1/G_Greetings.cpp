#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        pbds<ll> s;
        pbds<pair<ll, int>> b;
        int n;
        cin >> n;
        ll ans = 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            a[i] = x;
            b.insert({y, i});
        }
        auto it = b.begin();
        for (int i = 0; i < n; i++)
        {
            ans += s.size() - s.order_of_key(a[it->second]);
            s.insert(a[it->second]);
            b.erase(it);
            it = b.begin();
        }
        cout << ans << endl;
    }
    return 0;
}