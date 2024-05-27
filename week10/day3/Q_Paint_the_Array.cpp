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
        vector<ll> a(n);
        ll e_gcd = 0, o_gcd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0)
            {
                e_gcd = __gcd(e_gcd, a[i]);
            }
            else
            {
                o_gcd = __gcd(o_gcd, a[i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && a[i] % o_gcd == 0)
            {
                o_gcd = -1;
            }
            if (i % 2 == 1 && a[i] % e_gcd == 0)
            {
                e_gcd = -1;
            }
        }

        if (e_gcd == -1 && o_gcd == -1)
        {
            cout << 0 << endl;
        }
        else if (e_gcd == -1)
        {
            cout << o_gcd << endl;
        }
        else
        {
            cout << e_gcd << endl;
        }
    }
    return 0;
}