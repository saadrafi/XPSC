#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, odd = 0, t_odd = 0;
    cin >> n;
    vector<long> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] % 2 != 0)
        {
            t_odd++;
        }
    }

    if (t_odd >= n)
    {
        if (n % 2 == 0)
        {
            odd = n;
        }
        else
        {
            odd = n - 1;
        }
    }
    else
    {
        if (t_odd % 2 == 0)
        {
            odd = t_odd;
        }
        else
        {
            odd = t_odd - 1;
        }
    }

    long long sum = 0;
    sort(num.begin(), num.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 != 0 && odd > 0)
        {
            sum += num[i];
            odd--;
        }
        else if (num[i] % 2 == 0)
        {
            sum += num[i];
        }
    }
    cout << sum << endl;

    return 0;
}