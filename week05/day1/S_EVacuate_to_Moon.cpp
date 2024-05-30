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
        int n, m, h;
        cin >> n >> m >> h;
        priority_queue<int> cars, outlets;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cars.push(x);
        }

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            outlets.push(x);
        }

        long long ans = 0;
        while (!cars.empty() && !outlets.empty())
        {
            int car = cars.top();
            int outlet = outlets.top();
            ans += min(1LL * outlet * h, 1LL * car);
            cars.pop();
            outlets.pop();
        }
        cout << ans << endl;
    }
    return 0;
}