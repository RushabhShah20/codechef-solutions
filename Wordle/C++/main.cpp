// Problem: Wordle
// Link to the problem: https://www.codechef.com/problems/WORDLE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s;
        cin >> t;
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == t[i])
            {
                ans += "G";
            }
            else
            {
                ans += "B";
            }
        }
        cout << ans << endl;
    }
    return 0;
}