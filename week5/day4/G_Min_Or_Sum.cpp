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
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            ans |= x;
        }
        cout << ans << endl;
    }
    return 0;
}