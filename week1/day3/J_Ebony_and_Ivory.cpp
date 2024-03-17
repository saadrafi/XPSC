#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min(a, b);
    int mx = max(a, b);
    bool flag = false;

    while (c >= 0)
    {
        if (c % mx == 0)
        {
            flag = true;
            break;
        }
        c -= mn;
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}