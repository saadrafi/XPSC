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
        int mis_match = 0, match = 0, odd = n % 2;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                mis_match++;
            }
            else
            {
                match += 2;
            }
        }
        vector<char> v;
        for (int i = 0; i <= n; i++)
        {

            if (i >= mis_match)
            {
                int baki = max(0, i - mis_match - odd);
                int baki2 = max(0, i - mis_match);
                if ((baki % 2 == 0 || baki2 % 2 == 0) && baki <= match)
                {
                    v.push_back('1');
                }
                else
                {
                    v.push_back('0');
                }
            }
            else
            {
                v.push_back('0');
            }
        }
        for (char c : v)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}