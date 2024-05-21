#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(ll n)
{
    if (n < 2)
    {
        return false;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;

    if (is_prime(n))
    {
        cout << 1 << endl;
    }
    else if (n % 2 == 0 || is_prime(n - 2))
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }

    return 0;
}