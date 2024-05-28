#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<pair<ll,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    pbds<pair<ll,int>> s;
    int l = 0, r = 0;
    vector<ll> ans;
    while (r < n)
    {
        s.insert(a[r]);
        if (r - l + 1 == k)
        {
            ans.push_back((*s.find_by_order((k - 1) / 2)).first);
            s.erase(a[l]);
            l++; 
        }
        r++;
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}