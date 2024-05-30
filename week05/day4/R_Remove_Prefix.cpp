#include <bits/stdc++.h>
using namespace std;

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
        int count = 0;
        map<int, int> m;
        for (int i = n - 1; i >= 0; i--)
        {
            if (m[a[i]] == 0)
            {
                count++;
                m[a[i]]++;
            }
            else
            {
                break;
            }
        }
        cout << n - count << endl;
    }
    return 0;
}