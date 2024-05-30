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
        string s1, s2;
        cin >> s1 >> s2;
        char c1 = s1[s1.length() - 1], c2 = s2[s2.length() - 1];
        int l1 = s1.length(), l2 = s2.length();
        char ans;
        if(c1=='S')
        {
            if(c2=='M'||c2=='L'||(l2<l1))
            {
                ans='<';
            }
            else if(l1==l2)
            {
                ans='=';
            }
            else
            {
                ans='>';
            }
        }
        else if(c1=='M')
        {
            if(c2=='L')
            {
                ans='<';
            }
            else if(c2=='S')
            {
                ans='>';
            }
            else
            {
                ans='=';
            }
        }
        else
        {
            if(c2=='S'||c2=='M'||(l1>l2))
            {
                ans='>';
            }
            else if(l1==l2)
            {
                ans='=';
            }
            else
            {
                ans='<';
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}