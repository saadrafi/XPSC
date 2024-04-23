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
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[__lg(x)]++;
        }
        long long ans = 0;
        for (auto [i, j] : mp)
        {
            ans += (1LL * j * (j - 1) / 2);
        }
        cout << ans << endl;
    }
    return 0;
}