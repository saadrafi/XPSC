#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
      int n, black = 0;
      cin >> n;
      char s[n];
      for (int i = 0; i < n; i++)
      {
          cin >> s[i];
          if (s[i] == 'B')
          {
              black++;
          }
      }
      int b_index = find(s, s + n, 'B') - s;
      int count = 0;
      while (black)
      {
          if (s[b_index] == 'B')
          {
              count++;
              black--;
              b_index++;
          }
          else
          {
              b_index++;
              count++;
          }
      }
      cout << count << endl;
  }
  return 0;
}