#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long k;
    cin >> n >> k;
    long long a[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    multiset<long long> s;
    while (r < n)
    {
        s.insert(a[r]);
        while (*s.rbegin() - *s.begin() > k)
        {
            s.erase(s.find(a[l]));
            l++;
        }

        count += r - l + 1;

        r++;
    }
    cout << count << "\n";
    return 0;
}