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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (a[0] != n)
        {
            cout << "NO" << '\n';
            continue;
        }

        vector<int> pre(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            pre[0]++;
            if (a[i] < n)
            {
                pre[a[i]]--;
            }
        }

        for (int i = 1; i < n; i++)
        {
            pre[i] += pre[i - 1];
        }

        pre.pop_back();

        if (a == pre)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
