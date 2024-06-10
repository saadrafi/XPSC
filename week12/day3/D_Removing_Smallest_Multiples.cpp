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
        string s;
        cin >> s;
        vector<int> m(n + 1);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                m[i + 1] = 0;
            }
            else
            {
                m[i + 1] = 2;
            }
        }
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (m[j] == 0)
                {
                    ans += i;
                    m[j] = 1;
                }
                else if (m[j] == 2)
                {
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}