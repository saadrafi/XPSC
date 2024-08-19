#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        vector<ll> arr(n + 1, 0), ans(n + 1, 9);
        for (ll i = 0; i < n; i++)
        {
            arr[i + 1] = s[i] - '0';
        }

        if (arr[1] == 9)
        {
            for (ll i = 0; i <= n; i++)
            {
                ans[i] = 1;
            }
        }

        for (ll i = n; i > 0; i--)
        {
            ans[i] -= arr[i];
            if (ans[i] < 0)
            {
                ans[i] += 10;
                ans[i - 1]--;
            }
        }

        for (ll i = 0; i < n; i++)
        {
            cout << ans[i + 1];
        }
        cout << '\n';
    }
    return 0;
}