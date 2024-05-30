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
        int n;
        cin >> n;
        int x = (n * (n + 1)) / 2;
        int y = x + (x % n);
        cout << y - x + 1 << " ";
        for (int i = 2; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}