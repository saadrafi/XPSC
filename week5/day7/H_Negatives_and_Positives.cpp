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
        int n, pos = 0, neg = 0;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        sort(a.begin(), a.end());
        int n_pair = neg / 2;
        long long sum = 0;
        for (int i = 0; i < n_pair * 2; i++)
        {
            sum += abs(a[i]);
        }
        if (n_pair * 2 < n)
        {
            if (n_pair * 2 == n - 1)
            {
                sum += a[n - 1];
            }
            else if (abs(a[n_pair * 2]) > a[n_pair * 2 + 1])
            {
                sum += abs(a[n_pair * 2]) - a[n_pair * 2 + 1];
            }
            else
            {
                sum += a[n_pair * 2] + a[n_pair * 2 + 1];
            }
            for (int i = n_pair * 2 + 2; i < n; i++)
            {
                sum += a[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}