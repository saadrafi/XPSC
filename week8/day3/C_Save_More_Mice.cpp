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
        ll n, k;
        cin >> k >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        ll cat = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ll time = abs(k - a[i]);
            if (cat < a[i])
            {
                cat += time;
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}