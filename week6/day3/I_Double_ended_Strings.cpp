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
        string a, b;
        cin >> a >> b;
        if (a.length() > b.length())
        {
            swap(a, b);
        }
        int n = a.length();
        int m = b.length();
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                string x = a.substr(i, j);
                if (b.find(x) != string::npos)
                {
                    ans = max(ans, j);
                }
            }
        }
        cout << n + m - 2 * ans << endl;
    }
    return 0;
}