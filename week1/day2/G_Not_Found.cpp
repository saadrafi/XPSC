#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool arr[26];
    memset(arr, false, sizeof(arr));
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a'] = true;
    }
    string ans = "None";
    for (int i = 0; i < 26; i++)
    {
        if (!arr[i])
        {
            ans = (char)('a' + i);
            break;
        }
    }
    cout << ans;

    return 0;
}