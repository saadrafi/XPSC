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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long int temp = 0;
                int x = i, y = j, x1 = i - 1, y1 = j + 1, x2 = i + 1, y2 = j - 1, x3 = i - 1, y3 = j - 1;
                while (x >= 0 && y >= 0 && x < n && y < m)
                {
                    temp += a[x][y];
                    x++;
                    y++;
                }
                while (x1 >= 0 && y1 >= 0 && x1 < n && y1 < m)
                {
                    temp += a[x1][y1];
                    x1--;
                    y1++;
                }
                while (x2 >= 0 && y2 >= 0 && x2 < n && y2 < m)
                {
                    temp += a[x2][y2];
                    x2++;
                    y2--;
                }
                while (x3 >= 0 && y3 >= 0 && x3 < n && y3 < m)
                {
                    temp += a[x3][y3];
                    x3--;
                    y3--;
                }
                sum = max(sum, temp);
            }
        }
        cout << sum << endl;
    }
    return 0;
}