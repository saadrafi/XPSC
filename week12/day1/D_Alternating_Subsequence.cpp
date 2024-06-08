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
        ll sum = 0, num = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                num = a[i];
                while (i < n && a[i] > 0)
                {
                    num = max(num, a[i]);
                    i++;
                }
                sum += num;
            }
            else
            {
                num = a[i];
                while (i < n && a[i] < 0)
                {
                    num = max(num, a[i]);
                    i++;
                }
                sum += num;
            }
            i--;
        }

        cout << sum << endl;
    }
    return 0;
}