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
        int n;
        cin >> n;
        int a[n], X = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            X ^= a[i];
        }
        int ans = X;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, (X ^ a[i]));
        }
        cout << ans << endl;
    }

    return 0;
}