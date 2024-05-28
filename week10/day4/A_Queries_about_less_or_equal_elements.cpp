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
    int n, m;
    cin >> n >> m;
    pbds<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        cout << s.order_of_key(x + 1) << " ";
    }

    cout << endl;
    return 0;
}