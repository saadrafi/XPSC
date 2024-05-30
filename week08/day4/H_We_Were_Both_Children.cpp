#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= n)
            {
                mp[a[i]]++;
            }
        }
        vector<int> ans(n + 1);
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                ans[j] += mp[i];
            }
        }
        cout << *max_element(ans.begin(), ans.end()) << "\n";
    }
    return 0;
}