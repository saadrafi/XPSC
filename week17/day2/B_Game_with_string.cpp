#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
            s.erase(i - 1, 2);
            i -= 2;
        }
    }
    cout << (cnt % 2 == 0 ? "No" : "Yes") << endl;
    return 0;
}