#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    long long count = 0;
    map<int, int> m;
    while (r < n)
    {
        m[a[r]]++;
        while (m.size() > k)
        {
            m[a[l]]--;
            if (m[a[l]] == 0)
            {
                m.erase(a[l]);
            }
            l++;
        }
        count += r - l + 1;
        r++;
    }
    cout << count << "\n";
    return 0;
}