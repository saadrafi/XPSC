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
        long long x, a, b;
        cin >> x;

        int msb = __lg(x);
        b = (1 << msb);
        a = x ^ b;

        cout << a << " " << b << endl;
    }
    return 0;
}