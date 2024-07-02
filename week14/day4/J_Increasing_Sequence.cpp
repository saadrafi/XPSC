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
        ll n;
        cin >> n;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cnt++;
            ll b;
            cin >> b;
            if (b == cnt)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}