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
        vector<int> v[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int j = 0; j < x; j++)
            {
                int y;
                cin >> y;
                v[i].push_back(y);
                s.insert(y);
            }
        }
        int ans = 0;
        for (auto i : s)
        {
            set<int> s1;
            for (int j = 0; j < n; j++)
            {
                bool flag = true;
                for (auto k : v[j])
                {
                    if (k == i)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    for (auto k : v[j])
                    {
                        s1.insert(k);
                    }
                }
            }
            ans = max(ans, (int)s1.size());
        }
        cout << ans << '\n';
    }
    return 0;
}