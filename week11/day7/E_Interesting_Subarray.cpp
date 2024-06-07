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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = -1, r = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) >= 2)
            {
                l = i;
                r = i + 1;
                break;
            }
        }

        if (l == -1 && r == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << l + 1 << " " << r + 1 << endl;
        }
    }
    return 0;
}