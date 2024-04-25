#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), prefix(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            prefix[i] = a[i];
        }
        else
        {
            prefix[i] = a[i] + prefix[i - 1];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto l = lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin();
        cout << l + 1 << endl;
    }
    return 0;
}