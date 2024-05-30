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
        string s;
        cin >> s;
        int n = s.size();
        char first = s[0], last = s[n - 1];
        int cost = abs(first - last);
        priority_queue<pair<char, int>> pq;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] >= first && s[i] <= last)
            {
                pq.push({s[i], i + 1});
            }
            else if (s[i] >= last && s[i] <= first)
            {
                pq.push({s[i], i + 1});
            }
        }
        int moves = pq.size() + 2;
        cout << cost << " " << moves << endl;
        cout << 1 << " ";
        if (first > last)
        {

            while (!pq.empty())
            {
                cout << pq.top().second << " ";
                pq.pop();
            }
            cout << n << endl;
        }
        else
        {
            stack<pair<char, int>> st;
            while (!pq.empty())
            {
                st.push({pq.top().first, pq.top().second});
                pq.pop();
            }
            while (!st.empty())
            {
                cout << st.top().second << " ";
                st.pop();
            }
            cout << n << endl;
        }
    }
    return 0;
}