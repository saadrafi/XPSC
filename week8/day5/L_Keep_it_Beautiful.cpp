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
        int q;
        cin >> q;
        vector<ll> a(q);
        vector<char> b(q);
        ll taken;
        for (int i = 0; i < q; i++)
        {
            cin >> a[i];
        }
        ll current = a[0];
        b[0] = '1';
        bool flag = true, first = true;
        for (int i = 1; i < q; i++)
        {
            if (current <= a[i] && flag)
            {
                b[i] = '1';
                current = a[i];
            }
            else if (a[i] <= a[0] && (current <= a[i] || first))
            {
                b[i] = '1';
                current = a[i];
                first = false;
                flag = false;
            }
            else
            {
                b[i] = '0';
            }
        }
        for (int i = 0; i < q; i++)
        {
            cout << b[i];
        }
        cout << endl;
    }
    return 0;
}
