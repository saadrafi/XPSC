#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;

    }
    int sum = 0;
    bool flag = false;

    for(auto i : mp)
    {
        sum += i.second;
        if(sum > 2)
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
