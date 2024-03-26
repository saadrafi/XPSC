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
        stack<char> s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (s.empty())
            {
                s.push(c);
            }
            else
            {
                if (c == '(')
                {
                    s.push(c);
                }
                else
                {
                    if (s.top() == '(')
                    {
                        s.pop();
                    }
                    else
                    {
                        s.push(c);
                    }
                }
            }
        }
        cout << s.size() / 2 << endl;
    }

    return 0;
}