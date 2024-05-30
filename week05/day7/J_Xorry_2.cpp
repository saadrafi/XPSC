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
        int bit = 0;
        bool found = false;
        for (int i = msb - 1; i >= 0; i--)
        {
            if ((x >> i) & 1)
            {
                found = true;
            }
            else if (found)
            {
                bit++;
            }
        }
        if (bit)
        {
            cout << (1 << bit) << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}