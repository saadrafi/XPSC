#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        long long x;
        cin >> x;
        auto l = lower_bound(a.begin(), a.end(), x);
        auto r = upper_bound(a.begin(), a.end(), x);
        if (l == a.begin())
        {
            cout << "X ";
        }
        else
        {
            cout << *(--l) << " ";
        }
        if (r == a.end())
        {
            cout << "X" << endl;
        }
        else
        {
            cout << *r << endl;
        }
    }
    return 0;
}