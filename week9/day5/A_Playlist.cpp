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
    int ans = 0;
    map<ll, int> mp;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 0)
        {
            cnt++;
            mp[a[i]]++;
            ans = max(ans, cnt);
        }
        else
        {
            while (mp[a[i]] > 0)
            {
                mp[a[i - cnt]]--;
                cnt--;
            }
            cnt++;
            mp[a[i]]++;
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
}