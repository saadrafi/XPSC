#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void backtrack(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, int start)
    {
        ans.push_back(temp);
        for (int i = start; i < nums.size(); i++)
        {
            if (i > start && nums[i] == nums[i - 1])
            {
                continue;
            }
            temp.push_back(nums[i]);
            backtrack(nums, ans, temp, i + 1);
            temp.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        backtrack(nums, ans, temp, 0);

        return ans;
    }
};