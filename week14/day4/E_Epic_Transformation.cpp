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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }

        priority_queue<int> pq;
        for (auto i : mp)
        {
            pq.push(i.second);
        }

        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a--;
            b--;
            if (a > 0)
            {
                pq.push(a);
            }
            if (b > 0)
            {
                pq.push(b);
            }
        }
        if (pq.size() == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << pq.top() << endl;
        }
    }
    return 0;
}