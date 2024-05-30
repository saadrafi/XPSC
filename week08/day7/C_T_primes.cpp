#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<bool> is_prime(1000001, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= 1000000; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        ll x = sqrt(v[i]);
        if (is_prime[x] && x * x == v[i])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}