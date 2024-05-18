#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, int> mp;
    int cnt = 0, max_n = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    map<int, int> count;
    for (auto i : mp)
    {
        if (i.first != 1)
        {
            max_n = max(max_n, i.second);
        }
        int x = i.first;
        int r = sqrt(i.first);
        for (int j = 2; j <= r; j++)
        {
            if (x % j == 0)
            {
                count[j] += mp[i.first];
                while (x % j == 0)
                {
                    x /= j;
                }
            }
            
        }
        if (x > 1)
        {
            count[x] += mp[i.first];
        }
    }
    for (auto i : count)
    {
        max_n = max(max_n, i.second);
    }
    cout << max_n << endl;

    return 0;
}