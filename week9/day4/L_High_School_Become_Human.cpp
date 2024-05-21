#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, y;
    cin >> x >> y;

    double logXY = log(x) * y;
    double logYX = log(y) * x;

    if (logXY == logYX)
    {
        cout << "=" << endl;
    }
    else if (logXY < logYX)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << ">" << endl;
    }
    return 0;
}