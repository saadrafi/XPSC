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
    ll n, k;
    cin >> n >> k;

    for (int i = 1; i <= (log2(n) + 1); i++)
    {
      ll x = pow(2, i);
      ll y = (n + (x / 2)) / x;
      if (k <= y)
      {
        if (k == 1)
        {
          cout << x / 2 << endl;
          break;
        }
        else
        {
          ll ans = (x / 2) + (x * (k - 1));
          cout << ans << endl;
          break;
        }
      }
      else
      {
        k -= y;
      }
    }
  }
  return 0;
}