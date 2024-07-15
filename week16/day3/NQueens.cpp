#include <bits/stdc++.h>
using namespace std;

// *** Topic: Recursion & Backtracking ***

class Solution
{
    void backtrack(vector<vector<string>> &ans, vector<string> &board, int row, int n)
    {
        if (row == n)
        {
            ans.push_back(board);
            return;
        }
        for (int col = 0; col < n; col++)
        {
            bool flag = true;
            for (int i = 0; i < row; i++)
            {
                if (board[i][col] == 'Q')
                {
                    flag = false;
                    break;
                }
            }
            for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
            {
                if (board[i][j] == 'Q')
                {
                    flag = false;
                    break;
                }
            }
            for (int i = row, j = col; i >= 0 && j < n; i--, j++)
            {
                if (board[i][j] == 'Q')
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                board[row][col] = 'Q';
                backtrack(ans, board, row + 1, n);
                board[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        backtrack(ans, board, 0, n);
        return ans;
    }
};