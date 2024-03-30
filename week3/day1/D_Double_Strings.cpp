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
        vector<string> v(n);
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 0; j < v[i].size(); j++)
            {
                string left = v[i].substr(0, j + 1);
                string right = v[i].substr(j + 1);
                if (m[left] > 0 && m[right] > 0)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }

        cout << "\n";
    }
    return 0;
}