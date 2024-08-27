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
        vector<int> a(n), odd, even;
        int od = 0, evn = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                evn++;
                even.push_back(i + 1);
            }
            else
            {

                od++;
                odd.push_back(i + 1);
            }
        }
        od--;
        if (od < 0)
        {
            cout << "NO\n";
        }
        else
        {
            if (od > 1)
            {
                cout << "YES\n";
                for (int i = 0; i < 3; i++)
                {
                    cout << odd[i] << " ";
                }
                cout << "\n";
            }
            else if (evn > 1)
            {
                cout << "YES\n";
                cout << odd[0] << " ";
                for (int i = 0; i < 2; i++)
                {
                    cout << even[i] << " ";
                }
                cout << "\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}