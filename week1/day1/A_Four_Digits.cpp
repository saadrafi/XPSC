#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    s.insert(0, 4 - len, '0');
    cout << s;
    return 0;
}