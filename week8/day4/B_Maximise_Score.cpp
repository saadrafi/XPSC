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
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                b.push_back(abs(a[i] - a[i + 1]));
            }
            else if (i == n - 1)
            {
                b.push_back(abs(a[i] - a[i - 1]));
            }
            else
            {
                b.push_back(max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])));
            }
        }
        int min_num = *min_element(b.begin(), b.end());
        cout << min_num << "\n";
    }
    return 0;
}