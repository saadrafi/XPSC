/*--------------------------------Topicwise--------------------------*/

class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        int len1 = txt.length(), len2 = pat.length();
        int l = 0, r = 0, count = 0;
        vector<int> patCount(26, 0);
        vector<int> txtCount(26, 0);
        while (r < len1)
        {
            txtCount[txt[r] - 'a']++;
            if (r < len2)
            {
                patCount[pat[r] - 'a']++;
            }

            if (r - l + 1 == len2)
            {
                if (patCount == txtCount)
                {
                    count++;
                }
                txtCount[txt[l] - 'a']--;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return count;
    }
};