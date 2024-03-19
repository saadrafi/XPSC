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
        vector<string> a(n), b(n), c(n);
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            m[b[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            m[c[i]]++;
        }
        int ta = 0, tb = 0, tc = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]] == 1)
            {
                ta += 3;
            }
            else if (m[a[i]] == 2)
            {
                ta += 1;
            }

            if (m[b[i]] == 1)
            {
                tb += 3;
            }
            else if (m[b[i]] == 2)
            {
                tb += 1;
            }
            if (m[c[i]] == 1)
            {
                tc += 3;
            }
            else if (m[c[i]] == 2)
            {
                tc += 1;
            }
        }

        cout << ta << " " << tb << " " << tc << endl;
    }
    return 0;
}