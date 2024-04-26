#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, cases = 1;
    while (true)
    {
        cin >> n >> q;
        if (n == 0 && q == 0)
        {
            break;
        }
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << "CASE# " << cases << ":\n";
        while (q--)
        {
            int x;
            cin >> x;
            auto l = lower_bound(a.begin(), a.end(), x);
            if (l == a.end() || *l != x)
            {
                cout << x << " not found\n";
            }
            else
            {
                cout << x << " found at " << l - a.begin() + 1 << "\n";
            }
        }
        cases++;
    }
    return 0;
}