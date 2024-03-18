
/*--------------------------------Topicwise--------------------------*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        if (a[l] < b[r])
        {
            cout << a[l] << " ";
            l++;
        }
        else
        {
            cout << b[r] << " ";
            r++;
        }
    }
    while (l < n)
    {
        cout << a[l] << " ";
        l++;
    }
    while (r < m)
    {
        cout << b[r] << " ";
        r++;
    }

    return 0;
}