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
        queue<char> s;
        string str;
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        for (int i = 0; i < str.size(); i++)
        {
            if (s.empty())
            {
                s.push(str[i]);
            }
            else if (s.back() != str[i])
            {
                s.push(str[i]);
            }
        }

        int size = s.size();
        string res = "";
        for (int i = 0; i < size; i++)
        {
            res += s.front();
            s.pop();
        }

        if (res == "meow")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}