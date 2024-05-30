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
        int n, k;
        cin >> n >> k;
        map<int, pair<int, int>> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (m[x].first == 0)
            {
                m[x].first = i + 1;
            }
            m[x].second = i + 1;
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (m[a].first <= m[b].second && (m[a].first != 0 && m[b].second != 0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}