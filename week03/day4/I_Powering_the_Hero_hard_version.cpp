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
        long long int ans = 0;
        priority_queue<long long int> pq;
        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            if (x == 0)
            {
                if (pq.size() > 0)
                {
                    ans += pq.top();
                    pq.pop();
                }
                else
                {
                    ans += 0;
                }
            }
            else
            {
                pq.push(x);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}