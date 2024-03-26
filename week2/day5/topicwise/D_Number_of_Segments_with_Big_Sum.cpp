#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0, count = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            int x = n - r-1;
            count += x + 1;
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << count << "\n";
    return 0;
}