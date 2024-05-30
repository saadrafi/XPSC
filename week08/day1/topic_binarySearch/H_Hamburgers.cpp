#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string ss;
    cin >> ss;
    int n = ss.size(), b = 0, s = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (ss[i] == 'B')
        {
            b++;
        }
        else if (ss[i] == 'S')
        {
            s++;
        }
        else
        {
            c++;
        }
    }
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    long long r;
    cin >> r;
    long long l = 0, h = 1e13, ans = 0;
    while (l <= h)
    {
        long long m = (l + h) / 2;
        long long cb = max(0LL, m * b - nb);
        long long cs = max(0LL, m * s - ns);
        long long cc = max(0LL, m * c - nc);
        long long cost = cb * pb + cs * ps + cc * pc;
        if (cost <= r)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    cout << ans << endl;
    return 0;
}