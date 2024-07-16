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
        if (n % 4 == 0)
        {
            for (int i = 2; i < n + 2; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (n % 4 == 1)
        {
            cout << 0 << " ";
            for (int i = 2; i < n + 1; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (n % 4 == 2)
        {
            cout << "4 1 2 12 3 8 ";
            for (int i = 14; i < 14 + n - 6; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "2 1 3 ";
            for (int i = 4; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}