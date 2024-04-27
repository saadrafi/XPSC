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
        long long n, c;
        cin >> n >> c;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += i + 1;
        }
        sort(a.begin(), a.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > c)
            {
                break;
            }
            count++;
            c -= a[i];
        }
        cout << count << endl;
    }
    return 0;
}