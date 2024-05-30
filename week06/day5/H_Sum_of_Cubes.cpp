#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> cubes;
    for (long long i = 1; i <= 10000; i++)
    {
        cubes.push_back(i * i * i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        bool found = false;

        for (int i = 0; i < cubes.size(); i++)
        {
            long long rem = x - cubes[i];
            int y = lower_bound(cubes.begin(), cubes.end(), rem) - cubes.begin();
            if (y < cubes.size() && cubes[y] == rem)
            {
                found = true;
                break;
            }
        }
        if (found)
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