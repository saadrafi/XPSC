#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<char> a = {'a', 'a', 'b', 'b'};
    for (int i = 0; i < n; i++)
    {
        cout << a[i % 4];
    }
    return 0;
}