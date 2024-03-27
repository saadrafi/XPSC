#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        int l = 0, r = 0, ans = -1;
        map<char, int> m;
        while (r < s.length())
        {
            m[s[r]]++;
            while (m.size() > k)
            {
                m[s[l]]--;
                if (m[s[l]] == 0)
                {
                    m.erase(s[l]);
                }
                l++;
            }

            if (m.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            r++;
        }
        return ans;
    }
};