#include <bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int x)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] == x)
        {
            i++;
        }
        else if (a[j] == x)
        {
            j--;
        }
        else if (a[i] != a[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = true;
        for (int i = 0; i < n / 2; i++)
        {
            if (a[i] != a[n - i - 1])
            {
                bool left = check(a, n, a[i]);
                bool right = check(a, n, a[n - i - 1]);
                flag = left || right;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}