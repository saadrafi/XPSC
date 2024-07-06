#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int x = 0; x < n; x++)
    {
        int ans = 15;
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 15 - i; j++)
            {
                if (((a[x] + i) * (int)pow(2, j)) % 32768 == 0)
                {
                    ans = min(ans, i + j);
                }
            }
        }
        cout << ans << " ";
    }
    return 0;
}