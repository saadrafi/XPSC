#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0, low = 1, high = min(a, b);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a / mid + b / mid >= n && a / mid >= 1 && b / mid >= 1)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}