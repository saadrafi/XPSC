#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, bool> mp;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v[i] = s;
        mp[s] = true;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        string s = v[i];
        int len = s.length();
        if (mp[s] == true)
        {
            cout << s[len - 2] << s[len - 1];
            mp[s] = false;
        }
    }

    return 0;
}