#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x, y;
    if (n % 2)
    {
        x = n / 2 - 1;
        y = 1;
    }
    else
    {
        x = n / 2;
        y = 0;
    }
    cout << x + y << endl;
    for (int i = 1; i <= x; i++)
    {
        cout << 2 << " ";
    }
    if (y)
    {
        cout << 3;
    }

    return 0;
}