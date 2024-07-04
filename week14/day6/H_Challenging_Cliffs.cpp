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
        ll min_diff = LLONG_MAX;
        sort(a.begin(), a.end());
        int l = -1, r = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] < min_diff)
            {
                l = i - 1;
                r = i;
                min_diff = a[i] - a[i - 1];
            }
        }
        if (n == 2)
        {
            cout << a[0] << " " << a[1] << endl;
        }
        else
        {
            for (int i = r; i < n; i++)
            {
                cout << a[i] << " ";
            }
            for (int i = 0; i <= l; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}