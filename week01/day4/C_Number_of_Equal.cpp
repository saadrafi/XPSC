
/*--------------------------------Topicwise--------------------------*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    long long count = 0;
    while (l < n && r < m)
    {
        long long current = a[l];
        long long cnt1 = 0, cnt2 = 0;
        while (l < n && a[l] == current)
        {
            l++;
            cnt1++;
        }
        while(b[r]<current && r<m)
        {
            r++;
        }
        while (r < m && b[r] == current)
        {
            r++;
            cnt2++;
        }
        count += cnt1 * cnt2;
    }
    cout << count << endl;

    return 0;
}