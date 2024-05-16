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
        vector<pair<char, int>> up, lo;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                if (up.size() != 0)
                {
                    up.pop_back();
                }
            }
            else if (s[i] == 'b')
            {
                if (lo.size() != 0)
                {
                    lo.pop_back();
                }
            }
            else
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    lo.push_back({s[i], i});
                }
                else
                {
                    up.push_back({s[i], i});
                }
            }
        }
        map<int, char> mp;
        vector<int> index;
        for (int i = 0; i < up.size(); i++)
        {
            mp[up[i].second] = up[i].first;
            index.push_back(up[i].second);
        }
        for (int i = 0; i < lo.size(); i++)
        {
            mp[lo[i].second] = lo[i].first;
            index.push_back(lo[i].second);
        }
        sort(index.begin(), index.end());
        for (int i = 0; i < index.size(); i++)
        {
            cout << mp[index[i]];
        }
        cout << endl;
    }
    return 0;
}