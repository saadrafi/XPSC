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
        vector<int> v;
        bool visited[n];
        memset(visited, false, sizeof(visited));

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > n || visited[x - 1])
            {
                v.push_back(x);
            }
            else
            {
                visited[x - 1] = true;
            }
        }
        sort(v.begin(), v.end());
        vector<int> a;
        for (int i = 0; i < v.size(); i++)
        {
            int temp = (v[i] - 1) / 2;
            a.push_back(temp);
            
        }
        int j = 0, count = 0, flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (i + 1 <= a[j])
                {
                    count++;
                    j++;
                }
                else
                {
                    cout << -1 << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << count << endl;
        }
    }
    return 0;
}