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
        long long n, k;
        cin >> n >> k;

        long long low = 1, high = 1e18, ans = 0;
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            long long cnt = mid - (mid / n);
            if (cnt >= k)
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
    }
    return 0;
}