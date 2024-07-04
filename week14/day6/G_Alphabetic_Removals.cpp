#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (char c = 'a'; c <= 'z' && k > 0; c++)
    {

        for (int i = 0; i < n; i++)
        {
            if (k == 0)
            {
                break;
            }
            if (s[i] == c)
            {
                k--;
                s[i] = '0';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
        {
            cout << s[i];
        }
    }

    return 0;
}