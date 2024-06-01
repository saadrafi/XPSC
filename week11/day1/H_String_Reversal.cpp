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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    map<char,vector<int>> map_s, map_r;
    for (int i = 0; i < n; i++)
    {
        map_s[s[i]].push_back(i);
        map_r[r[i]].push_back(i);
    }

    vector<int> p(n);
    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int i = 0; i < map_r[c].size(); i++)
        {
            p[map_r[c][i]] = map_s[c][i];
        }
    }

    pbds<int> st;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += st.size() - st.order_of_key(p[i]);
        st.insert(p[i]);
    }

    cout << ans << endl;

    return 0;
}