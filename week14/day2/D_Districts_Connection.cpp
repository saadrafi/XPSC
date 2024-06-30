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
        set<int> s;
        vector<int> v(n);
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
            mp[v[i]].push_back(i);
        }
        if (s.size() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            vector<vector<int>> ans;
            for (auto i : mp)
            {
                ans.push_back(i.second);
            }
            for (int i = 1; i < ans.size(); i++)
            {
                for (int j = 0; j < ans[i].size(); j++)
                {
                    cout << ans[0][0] + 1 << " " << ans[i][j] + 1 << endl;
                }
            }
            for (int i = 1; i < ans[0].size(); i++)
            {
                cout << ans[0][i] + 1 << " " << ans[1][0] + 1 << endl;
            }
        }
    }
    return 0;
}