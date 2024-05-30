#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> odd, even;
    if (n < 4 && n != 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    for (int i = odd.size() - 1; i >= 0; i--)
    {
        cout << odd[i] << " ";
    }
    for (int i = even.size() - 1; i >= 0; i--)
    {
        cout << even[i] << " ";
    }
    cout << endl;
    return 0;
}