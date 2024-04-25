#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while (q--)
    {
        long long x, y;
        cin >> x >> y;
        auto l = lower_bound(a.begin(), a.end(), x);
        auto r = upper_bound(a.begin(), a.end(), y);
        cout << r - l << " ";
    }
    return 0;
}