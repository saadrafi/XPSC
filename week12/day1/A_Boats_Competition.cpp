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
        int n;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int ans = 0;
        for (int i = 2; i <= 2 * n; i++)
        {
            int cnt = 0;
            for (int j = 1; j < (i + 1) / 2; j++)
            {
                cnt += min(m[j], m[i - j]);
            }
            if (i % 2 == 0)
            {
                cnt += m[i / 2] / 2;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}