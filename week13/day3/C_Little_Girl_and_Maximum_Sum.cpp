#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(n, 0);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        b[l]++;
        if (r + 1 < n)
        {
            b[r + 1]--;
        }
    }
    for (int i = 1; i < n; i++)
    {
        b[i] += b[i - 1];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * b[i];
    }
    cout << ans << endl;

    return 0;
}