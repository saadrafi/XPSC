#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    int l = 0, r = 0, ans = n + 1;
    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }
    if (ans == n + 1)
    {
        cout << "-1\n";
    }
    else
    {
        cout << ans << "\n";
    }
    return 0;
}