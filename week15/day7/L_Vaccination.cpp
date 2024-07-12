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
        int n, k, d, w;
        cin >> n >> k >> d >> w;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int exp = -1, ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= exp + d && cnt > 0)
            {
                cnt -= 1;
            }
            else
            {
                exp = w + a[i];
                cnt = k - 1;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}