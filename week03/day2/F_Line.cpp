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
        string s;
        cin >> s;
        long long sum = 0, total;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sum = sum + i;
            }
            else
            {
                sum += (n - i - 1);
            }
        }
        total = sum;

        vector<int> change;
        int num = 0;

        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == 'L')
            {
                total += (n - i - 1) - i;
                change.push_back((n - i - 1) - i);
                num++;
            }
        }

        for (int i = n / 2; i < n; i++)
        {
            if (s[i] == 'R')
            {
                total += i - (n - i - 1);
                change.push_back(i - (n - i - 1));
                num++;
            }
        }

        sort(change.begin(), change.end(), greater<int>());

                vector<long long> ans(n);
        for (int i = 0; i < num; i++)
        {
            ans[i] = sum + change[i];
            sum += change[i];
        }
        for (int i = num; i < n; i++)
        {
            ans[i] = total;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}