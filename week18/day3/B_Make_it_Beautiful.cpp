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
            mp[a[i]]++;
        }
        if (mp.size() == 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
            vector<int> ans;
            for (auto x : mp)
            {
                ans.push_back(x.first);
                mp[x.first]--;
            }
            reverse(ans.begin(), ans.end());
            for (auto x : mp)
            {
                while (x.second--)
                {
                    ans.push_back(x.first);
                }
            }
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}