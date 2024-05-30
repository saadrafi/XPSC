#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, ans = -1;
    cin >> a >> b >> c;
    int d = c;

    while (d <= b)
    {
        if (d >= a)
        {
            ans = d;
            break;
        }
        d += c;
    }
    cout << ans;
    return 0;
}