#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            if (a[i].first + a[l].first + a[r].first == x)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                return 0;
            }
            else if (a[i].first + a[l].first + a[r].first < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}