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
        long long int a, b, n, s;
        cin >> a >> b >> n >> s;
        long long x = s / n;
        int y ;
        if(a<x)
        {
            y = s - (a * n);
        }
        else
        {
            y = s - (x * n);
        }

        if ( b >= y)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;