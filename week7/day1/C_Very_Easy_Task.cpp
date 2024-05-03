#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y;
    cin >> n >> x >> y;
    long long low = 0, high = 1e18, ans = 0;
    n--;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long cnt = 0;
        cnt += mid / x + mid / y;
        if (cnt >= n)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans + min(x, y) << endl;
    return 0;
}