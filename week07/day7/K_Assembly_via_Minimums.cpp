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
    int n;
    cin >> n;
    int m = (n * (n - 1)) / 2;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    int t = 0;
    for (int i = 0; i < m; i = i + (n - t))
    {
      cout << a[i] << " ";
      t++;
    }
    cout<<1000000000<<endl;
  }
  return 0;
}