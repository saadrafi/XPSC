#include <bits/stdc++.h>
using namespace std;

// *** Topic: Recursion & Backtracking ***

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
            if (i > start && candidates[i] == candidates[i - 1])
            {
                continue;
            }
            temp.push_back(candidates[i]);
            backtrack(candidates, ans, temp, i + 1, target - candidates[i]);
            temp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, ans, temp, 0, target);
        return ans;
    }
};