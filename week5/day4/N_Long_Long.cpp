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
        int n;
        cin >> n;
        long long int a[n], sum = 0;
        bool flag = false;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0 && flag)
            {
                count++;
                flag = false;
            }
            if (a[i] < 0)
            {
                flag = true;
            }
        }
        if (flag)
        {
            count++;
        }

        for (int i = 0; i < n; i++)
        {
            sum += abs(a[i]);
        }

        cout << sum << " " << count << endl;
    }
    return 0;
}