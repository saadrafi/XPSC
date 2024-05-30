#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        string temp = s;
        for (int i = 0; i <= mid; i++)
        {
            temp[a[i] - 1] = '.';
        }
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (temp[i] == t[j])
            {
                j++;
            }
            i++;
        }
        if (j == m)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l;
    return 0;
}