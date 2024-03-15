#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c = 2, sum = 0;
    cin >> a >> b;

    while (c--)
    {
        if (a > b)
        {
            sum += a;
            a--;
        }
        else
        {
            sum += b;
            b--;
        }
    }
    cout << sum;

    return 0;
}