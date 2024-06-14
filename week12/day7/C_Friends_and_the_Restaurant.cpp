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
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<ll> diff;
        for (int i = 0; i < n; i++)
        {
            diff.push_back(b[i] - a[i]);
        }

        sort(diff.begin(), diff.end(), greater<ll>());
        int count = 0;
        int l = 0, r = n - 1;
        while (r > l)
        {
            if (diff[l] + diff[r] >= 0)
            {
                count++;
                l++;
            }
            r--;
        }

        cout << count << endl;
    }
    return 0;
}