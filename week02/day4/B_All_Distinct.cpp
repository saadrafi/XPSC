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
        set<int> s;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        if ((n - s.size()) % 2 != 0)
        {
            cout << s.size() - 1 << "\n";
        }
        else
        {
            cout << s.size() << "\n";
        }
    }
    return 0;
}