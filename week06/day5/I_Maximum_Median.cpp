#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    long long low = 1, high = 2e9, ans = 0;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long cnt = 0;
        for (long long i = n / 2; i < n; i++)
        {
            cnt += max(0LL, mid - a[i]);
        }
        if (cnt <= k)
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