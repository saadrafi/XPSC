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
        int n, k;
        long long int q;
        cin >> n >> k >> q;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, cnt = 0;
        long long int ans = 0;

        while (i < n)
        {
            if (a[i] <= q)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if (cnt >= k)
            {
                ans += (cnt - k + 1);
            }
            i++;
        }
        cout << ans << "\n";
    }
    return 0;
}