#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long low = 1, high = 1e18, ans = 1e18;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += mid / a[i];
            if (cnt >= t)
            {
                break;
            }
        }
        if (cnt >= t)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}