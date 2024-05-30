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
        int n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        
        long long sum = 0;
        int i = 0, j = n - 1;
        while (v[j] > 0 && j >= 0)
        {
            sum += 2 * v[j];
            j -= k;
        }
        while (v[i] < 0 && i < n)
        {
            sum += 2 * abs(v[i]);
            i += k;
        }
        sum = sum - max(abs(v[0]), v[n - 1]);
        cout << sum << endl;
    }
    return 0;
}