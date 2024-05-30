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
        map<int, int> num;
        map<int, int> divisor;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            num[x]++;
        }

        for (auto i : num)
        {
            int x = i.first;
            int y = i.second;
            for (int j = 2; j * j <= x; j++)
            {
                if (x % j == 0)
                {
                    while (x % j == 0)
                    {
                        divisor[j] += y;
                        x /= j;
                    }
                }
            }
            if (x > 1)
            {
                divisor[x] += y;
            }
        }

        bool flag = true;

        for (auto [x, y] : divisor)
        {
            if (y % n != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}