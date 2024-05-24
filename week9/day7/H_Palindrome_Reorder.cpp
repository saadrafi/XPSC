#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for (char c : s)
    {
        cnt[c - 'A']++;
    }
    int odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2 == 1)
        {
            odd++;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<char> ans(s.size());
    int l = 0, r = s.size() - 1;
    for (int i = 0; i < 26; i++)
    {
        while (cnt[i] >= 2)
        {
            ans[l] = ans[r] = i + 'A';
            l++;
            r--;
            cnt[i] -= 2;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == 1)
        {
            ans[s.size() / 2] = i + 'A';
            break;
        }
    }
    for (char c : ans)
    {
        cout << c;
    }
    cout << endl;

    return 0;
}