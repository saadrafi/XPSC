#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end(), greater<ll>());
  ll l = 0, h = 1e11, ans = 0;

  while (l <= h)
  {
    ll mid = (l + h) / 2;
    ll cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
      if (a[i] + b[j] <= mid)
      {
        cnt += (n - j);
        i++;
      }
      else
      {
        j++;
      }
    }
    if (cnt >= k)
    {
      ans = mid;
      h = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }

  cout << ans << endl;

  return 0;
}