#include <bits/stdc++.h>
using namespace std;

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
        vector<long long> a(n), prefix(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<long long>());
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        while (q--)
        {
            long long x;
            cin >> x;
            auto l = lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin();
            if (l == n)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << l + 1 << endl;
            }
        }
    }
    return 0;
}