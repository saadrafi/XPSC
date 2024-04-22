#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    map<long long, int> mp;
    for (int i = 0; i < n; i++)
    {
      long long x;
      cin >> x;
      mp[x]++;
    }

    vector<pair<long long, int>> v(mp.begin(), mp.end());
    int count = v[0].second;
    for (int i = 0; i < v.size() - 1; i++)
    {
      if (v[i].first + 1 == v[i + 1].first)
      {
        count += max(0, v[i + 1].second - v[i].second);
      }
      else
      {
        count += v[i + 1].second;
      }
    }
    cout << count << endl;
  }
  return 0;
}