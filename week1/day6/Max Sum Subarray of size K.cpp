/*--------------------------------Topicwise--------------------------*/

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        // code here
        long long sum = 0, ans = 0;
        int i = 0, j = 0;
        while (j < N)
        {
            sum += Arr[j];
            if (j - i + 1 == K)
            {
                ans = max(ans, sum);
                sum -= Arr[i];
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};