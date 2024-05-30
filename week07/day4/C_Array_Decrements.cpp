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
        int n, d = 0, e = 0;
        cin >> n;
        vector<int> a(n), b(n), diff;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != 0)
            {
                diff.push_back(a[i] - b[i]);
                d = max(d, a[i] - b[i]);
            }
            else
            {
                e = max(e, a[i]);
            }
        }

        bool flag = true;
        for (int i = 0; i < diff.size(); i++)
        {
            if (diff[i] != d || diff[i] < 0 || e > d)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}