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
        int pair = 0;

        for (int i = 1; i < n; i += 2)
        {
            if (s[i] != s[i - 1])
            {
                pair++;
            }
        }
        if (pair % 2)
        {
            cout << "Zlatan" << endl;
        }
        else
        {
            cout << "Ramos" << endl;
        }

    }

        return 0;
    }