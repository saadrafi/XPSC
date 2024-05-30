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

        long long int a, b, c;
        cin >> a >> b >> c;
        long long int diff1 = a - 1, diff2 = abs(b - c) + abs(c - 1);
        if (diff1 == diff2)
        {
            cout << 3 << "\n";
        }
        else if (diff1 < diff2)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
    }
    return 0;
}