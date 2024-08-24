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
        string s;
        cin >> s;
        int ans = n - 1;

        int i = 0, j = n - 1;
        while (s[i] == 'B')
        {
            ans--;
            i++;
        }
        while (s[j] == 'A')
        {
            ans--;
            j--;
        }
        cout << max(0, ans) << endl;
    }
    return 0;
}