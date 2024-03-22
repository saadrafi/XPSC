#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long n, x;
    cin >> n >> x;
    vector<long> a;
    for (int i = 0; i < n; i++)
    {
        long temp;
        cin >> temp;
        if (temp != x)
        {
            a.push_back(temp);
        }
    }
    
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}