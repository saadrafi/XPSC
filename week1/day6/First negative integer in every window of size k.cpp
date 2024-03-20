/*--------------------------------Topicwise--------------------------*/

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{

    vector<long long> ans;
    queue<pair<int, int>> neg;
    int l = 0, r = 0;

    while (r < N)
    {
        if (A[r] < 0)
        {
            neg.push({r, A[r]});
        }

        if (r - l + 1 == K)
        {
            if (neg.empty())
            {
                ans.push_back(0);
                l++;
                r++;
            }
            else
            {
                pair<int, int> num = neg.front();
                if (num.first > r)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(num.second);
                }

                l++;
                r++;
                if (num.first < l)
                {
                    neg.pop();
                }
            }
        }
        else
        {
            r++;
        }
    }

    return ans;
}