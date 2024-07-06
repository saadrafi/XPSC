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
        int n;
        cin >> n;
        priority_queue<ll> pq, pq2;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
            pq.push(x);
        }

        pq2.push(sum);
        int cnt = n;

        while (cnt--)
        {
            if (pq.empty() || pq2.empty())
            {
                break;
            }
            while (!pq.empty() && !pq2.empty() && pq.top() == pq2.top())
            {
                pq.pop();
                pq2.pop();
            }

            ll x = 0, y = 0;
            if (!pq2.empty())
            {
                x = pq2.top() / 2;
                y = (pq2.top() + 1) / 2;
                pq2.pop();
            }

            if (x && y)
            {
                pq2.push(x);
                pq2.push(y);
            }
        }

        if (pq.empty() && pq2.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}