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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = a[0], prod = a[0];
        for (int i = 1; i < n; i++)
        {
            sum |= a[i];
            prod &= a[i];
        }
        cout << sum - prod << endl;
    }
    return 0;
}