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
        int n, ans = 0;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int g = s.find('g');
        string s1 = s.substr(0, g + 1);
        s += s1;

        int cnt = 0, flag = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                flag = 1;
            }
            if (s[i] == 'g')
            {
                flag = 0;
                ans = max(ans, cnt);
                cnt = 0;
            }
            if (flag)
            {
                cnt++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}