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
        ll n, k, sum = 0;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll total = (n * (n + 1)) / 2;
        ll missing = total - sum;
        vector<ll> b(n);
        k = k % (n + 1);
        if (k)
        {
            int i = n - k + 1;
            if (i == n)
            {
                i = 0;
            }
            for (int l = 0; l < n; l++)
            {
                if (l == k - 1)
                {
                    b[l] = missing;
                }
                else
                {
                    b[l] = a[i++];
                }
                if (i == n)
                {
                    i = 0;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                b[i] = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}