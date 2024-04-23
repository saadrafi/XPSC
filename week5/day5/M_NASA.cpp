#include <bits/stdc++.h>
using namespace std;

int N = (1 << 15);
vector<int> palindromes;

void generate_palindromes()
{
    for (int i = 0; i < N; i++)
    {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if (s == t)
        {
            palindromes.push_back(stoi(s));
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    generate_palindromes();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindromes.size(); j++)
            {
                int c = (a[i] ^ palindromes[j]);
                ans += mp[c];
            }
        }

        cout << (ans / 2) << "\n";
    }
    return 0;
}