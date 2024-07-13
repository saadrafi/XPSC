#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void backtrack(vector<int> &candidates, vector<vector<int>> &ans, vector<int> &temp, int start, int target)
    {
        if (target < 0)
        {
            return;
        }
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }
        for (int i = start; i < candidates.size(); i++)
        {
            temp.push_back(candidates[i]);
            backtrack(candidates, ans, temp, i, target - candidates[i]);
            temp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(candidates, ans, temp, 0, target);
        return ans;
    }
};