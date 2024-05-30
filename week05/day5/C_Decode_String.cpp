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
        stack<char> st;
        int l = n - 1;

        while (l >= 0)
        {
            if (s[l] == '0')
            {
                string t = s.substr(l - 2, 2);
                char c = 'a' + stoi(t) - 1;
                st.push(c);
                l -= 3;
            }
            else
            {
                char c = 'a' + s[l] - '1';
                st.push(c);
                l--;
            }
        }

        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }

        cout << "\n";
    }
    return 0;
}