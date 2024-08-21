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
        string a = "", b;
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            a += s[i];
            if (i + 1 < s.size())
            {
                b = s.substr(i + 1);
                if (b[0] != '0')
                {
                    if (stoi(a) < stoi(b))
                    {
                        cout << a << " " << b << endl;
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}