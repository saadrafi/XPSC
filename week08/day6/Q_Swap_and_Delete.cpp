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
        string s;
        cin >> s;
        int n = s.size(), one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (zero == 0)
                {
                    break;
                }
                zero--;
            }
            if (s[i] == '0')
            {
                if (one == 0)
                {
                    break;
                }
                one--;
            }
        }
        cout << max(one, zero) << endl;
    }
    return 0;
}