#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int h, n, m;
        cin >> h >> n >> m;
        while (h > 20 && n > 0)
        {
            h = h / 2 + 10;
            n--;
        }
        while (h > 0 && m > 0)
        {
            h -= 10;
            m--;
        }
        if (h <= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}