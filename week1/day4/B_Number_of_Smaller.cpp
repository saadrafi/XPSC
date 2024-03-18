
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
    int l = 0, r = 0, count = 0;
    while (r < m && l < n)
    {
        if (b[r] > a[l])
        {
            count++;
            l++;
        }
        else
        {
            cout << count << " ";
            r++;
        }
    }
    while (r < m)
    {
        cout << count << " ";
        r++;
    }
    return 0;
}