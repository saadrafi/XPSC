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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<ll, int>> b(q);
        for (int i = 0; i < q; i++)
        {
            cin >> b[i].first;
            b[i].second = i;
        }
        sort(b.begin(), b.end());
        vector<ll> ans(q);
        ll sum = 0;
        int i = 0, j = 0;
        while (i < q)
        {
            while (j < n && a[j] <= b[i].first)
            {
                sum += a[j];
                j++;
            }
            ans[b[i].second] = sum;
            i++;
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}