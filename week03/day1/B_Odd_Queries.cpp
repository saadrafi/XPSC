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
        vector<long long int> a(n), t_odd(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                t_odd[i + 1] = t_odd[i] + 1;
            }
            else
            {
                t_odd[i + 1] = t_odd[i];
            }
        }
        while (q--)
        {
            int l, r;
            long long int k;
            cin >> l >> r >> k;
            int odd_in = t_odd[r] - t_odd[l - 1];
            int odd;
            if (k % 2 == 0)
            {
                odd = t_odd[n] - odd_in;
            }
            else
            {
                odd = t_odd[n] - odd_in + r - l + 1;
            }
            if (odd % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}