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
        long long n;
        cin >> n;
        long long ans, p = 0;
        while (pow(2, p) <= n)
        {
            p++;
        }
        ans = pow(2, p - 1) - 1;
        cout << ans << endl;
    }
    return 0;
}