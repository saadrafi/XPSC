#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n;
    cin >> k >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll low = 0, high = 1e12, ans = 0;
    while (low <= high)
    {
        ll mid = (low + high) / 2, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mid)
            {
                sum += mid;
            }
            else
            {
                sum += a[i];
            }
        }
        if (sum / k >= mid)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}