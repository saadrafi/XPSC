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
        vector<long> a(n);
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > i && max < a[i] - i - 1)
            {
                max = a[i] - i - 1;
            }
        }
        cout << max << endl;
    }
    return 0;
}